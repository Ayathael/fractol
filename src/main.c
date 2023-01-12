/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah.roger <diamonstarlighting@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:27:50 by sarah.roger       #+#    #+#             */
/*   Updated: 2023/01/12 14:06:25 by sarah.roger      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
#include <stdio.h>

void	fract_init(t_fractol *data)
{
	if (data->fract == 0)
		mandelbrot_init(data);
	fract_calc(data);
}

void	fract_calc(t_fractol *data)
{
	if (data->it_max < 0)
		data->it_max = 0;
	if (data->fract == 0)
		mandelbrot_pthread(data);
	else if (data->fract == 1)
		julia_pthread(data);
	if (data->show_text)
		put_text(data);
}

void	mlx_win_init(t_fractol *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WIDTH, WIDTH, "Fractol");
	data->img = mlx_new_image(data->mlx, WIDTH, WIDTH);
	data->img_ptr = mlx_get_data_addr(data->img,
			&data->bpp, &data->sl, &data->endian);
}

void	fract_comp(int ac, char **av, t_fractol *data)
{
	if (ft_strcmp(av[1], "mandelbrot") == 0)
		data->fract = 0;
	else if (ft_strcmp(av[1], "julia") == 0)
		data->fract = 1;
	if (ac == 4)
	{
		data->c_r = ft_atof(av[2]);
		data->c_i = ft_atof(av[3]);
		julia_init(data);
		fract_calc(data);
	}
	else
		fract_init(data);
}

int	main(int ac, char **av)
{
	t_fractol	*data;

	if (check_errors(ac, av) == 1)
		return (1);
	data = (t_fractol *)malloc(sizeof(t_fractol));
	if (data == NULL)
		return (1);
	if (ac <= 4)
	{
		mlx_win_init(data);
		fract_comp(ac, av, data);
		mlx_hook(data->win, 17, 0L, ft_close, data);
		mlx_key_hook(data->win, key_hook, data);
		mlx_mouse_hook(data->win, mouse_hook, data);
		mlx_loop(data->mlx);
	}
	return (0);
}
