/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:14:38 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:45:26 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	x;
	char	*xdest;
	char	*xsrc;

	x = 0;
	xdest = (char *)dest;
	xsrc = (char *)src;
	if (xsrc < xdest)
	{
		while (len > 0)
		{
			len--;
			xdest[len] = xsrc[len];
		}
	}
	else
	{
		while (x < len)
		{
			xdest[x] = xsrc[x];
			x++;
		}
	}
	return (xdest);
}

/*
int main()
{
    char xsrc[10] = "nyu";
    char xdest[10] = "blabla";
    ft_memmove(xdest, xsrc, 3*sizeof(char));
    printf("test ft_memmove : %s\n", xdest); 
    return(0);
}
*/
