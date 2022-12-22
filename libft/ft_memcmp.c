/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:14:04 by sroger            #+#    #+#             */
/*   Updated: 2022/10/17 11:34:38 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				x;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	x = 0;
	while (n > x)
	{
		if (str1[x] != str2[x])
			return (str1[x] - str2[x]);
		x++;
	}
	return (0);
}

/*
int main()
{
    char    s1[200] = "t\200";
    char    s2[200] = "t\0";
    size_t  n;

    n = 2;
    printf("test ft_memcmp : %d\n", ft_memcmp(s1, s2, n));
    return (0);
}
*/
