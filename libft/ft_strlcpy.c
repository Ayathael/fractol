/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:16:20 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:48:38 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (src[y] != '\0')
	{
		y++;
	}
	if (len == 0)
	{
		return (y);
	}
	while (src[x] != '\0' && (x < len -1))
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (y);
}

/*
int main()
{
    char src[30] = "lorem ipsum dolor amet";
    char dest[10];
    printf("test ft_strlcpy : %zu\n", ft_strlcpy(dest, src, 0)); 
	printf("test ft_strlcpy : %s\n", dest); 
    return(0);
}
*/