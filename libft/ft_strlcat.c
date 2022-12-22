/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:16:04 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:51:58 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	x;
	size_t	size;

	x = 0;
	size = 0;
	while ((dest[size] != '\0') && size < len)
	{
		size++;
	}
	x = size;
	while ((src[size - x] != '\0') && size + 1 < len)
	{
		dest[size] = src[size - x];
		size++;
	}
	if (x < len)
	{
		dest[size] = '\0';
	}
	return (x + ft_strlen((char *)src));
}

/*
int main()
{
    char src[10] = "nyu";
    char dest[10] = "blabla";
    ft_strlcat(dest, src, 10*sizeof(char));
    printf("test ft_strlcat : %s\n", dest); 
    return(0);
}
*/
