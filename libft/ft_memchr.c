/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:13:48 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 10:51:41 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			x;

	str = (unsigned char *)s;
	x = 0;
	while (n > 0)
	{
		if (str[x] == (unsigned char)c)
			return (str + x);
	n--;
	x++;
	}
	return (0);
}

/*
int main(void)
{
    char str[10] = {0, 1, 2 ,3 ,4 ,5};
    char *str2;
    str2 = ft_memchr(str, 0, 1);

    printf("test ft_memchr : %s\n", str2);
    return (0);
}
*/
