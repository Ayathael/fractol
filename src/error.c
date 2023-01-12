/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarah.roger <diamonstarlighting@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:18:29 by sarah.roger       #+#    #+#             */
/*   Updated: 2023/01/12 15:48:14 by sarah.roger      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"
#include <stdio.h>

int	check_double(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '-' || str[i] == '+')
		return (1);
	while (str[i] && (str[i] != '.' || str[i] != ',')
		&& ft_isdigit(str[i]))
		i++;
	if (str[i] != '.' && str[i] != ',')
		return (1);
	i++;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	if (str[i] != '\0')
		return (1);
	return (0);
}

int	errors_ac2or4(int ac, char **av)
{
	if (ac != 2 && ac != 4)
	{
		ft_putendl("Usage /fractol \"mandelbrot\", \"julia x y\"");
		return (1);
	}
	return (0);
}

int	check_errors_julia(int ac, char **av)
{
	if (ac == 4)
	{
		if (ft_strcmp(av[1], "mandelbrot") == 0)
		{
			ft_putendl("ERROR : For mandelbrot no param please");
			return (1);
		}
		if (ft_strcmp(av[1], "julia") == 0)
		{
			if ((ft_atof(av[2]) < -2.0 || ft_atof(av[2]) > 2.0)
				|| (ft_atof(av[3]) < -2.0 || ft_atof(av[3]) > 2.0)
				|| (check_double(av[2]) == 1 || check_double(av[3]) == 1))
			{
				ft_putendl("ERROR : Value between -2.0 and 2.0 for x and y");
				return (1);
			}
		}
		else
		{
			ft_putendl("Usage /fractol \"mandelbrot\", \"julia x y\"");
			return (1);
		}
	}
	return (0);
}

int	check_errors_mandelbrot(int ac, char **av)
{
	if (ft_strcmp(av[1], "mandelbrot") == 0)
		return (0);
	if (ft_strcmp(av[1], "julia") == 0)
	{
		ft_putendl("ERROR : Please enter param for Julia");
		ft_putendl("Usage /fractol julia x y");
		return (1);
	}
	else
	{
		ft_putendl("Usage /fractol \"mandelbrot\", \"julia x y\"");
		return (1);
	}
}

int	check_errors(int ac, char **av)
{
	if (errors_ac2or4(ac, av) == 0)
	{
		if (ac == 2)
		{
			if (check_errors_mandelbrot(ac, av) == 1)
				return (1);
		}
		else
		{
			if (check_errors_julia(ac, av) == 1)
				return (1);
		}
	}
	else
		return (1);
	return (0);
}
