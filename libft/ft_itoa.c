/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:08:03 by sroger            #+#    #+#             */
/*   Updated: 2022/10/19 13:00:35 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_size(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		x;
	long	y;

	x = nb;
	if (x == -2147483648)
		return (ft_strdup("-2147483648"));
	y = ft_size(x);
	str = (char *)malloc(sizeof(char) * (y + 1));
	if (str == NULL)
		return (0);
	str[y--] = '\0';
	if (x < 0)
	{
		str[0] = '-';
		x = x * -1;
	}
	while (x >= 10)
	{
		str[y] = 48 + (x % 10);
		x = x / 10;
		y--;
	}
	str[y] = 48 + x;
	return (str);
}
/*
int main(void)
{
    printf("test ft_itoa : %s\n", ft_itoa(-123156));
    return (0);
}
 */
