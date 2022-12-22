/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:14:25 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:42:18 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	x;
	char	*xdest;
	char	*xsrc;

	x = 0;
	xdest = (char *)dest;
	xsrc = (char *)src;
	while (x < len)
	{
		xdest[x] = xsrc[x];
		x++;
	}
	return (dest);
}

/*
int main()
{
    char xsrc[10] = "blabla";
    char xdest[10];
    ft_memcpy(xdest, xsrc, 3*sizeof(char));
    printf("test ft_memcpy : %s\n", xdest); 
    return(0);
}
*/
