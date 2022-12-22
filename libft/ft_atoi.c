/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:05:11 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 11:23:44 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	mult;
	int	nb;

	x = 0;
	mult = 1;
	nb = 0;
	str = (char *)str;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\t' || str[x] == '\v')
	{
		x++;
	}
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
				mult = mult * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		nb = nb * 10 + (str[x] - 48);
		x++;
	}
	return (nb * mult);
}

/*
int        main(void)
{
    char    *str;

    str = "\n\n\n  -46\b9 \n5d6";
    printf("test ft_atoi : %d\n", ft_atoi(str));
}
*/
