/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:14:54 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:38:34 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t len)
{
	char	*str;

	str = ptr;
	while (len)
	{
		*str = (unsigned char)x;
		str++;
		len--;
	}
	return (ptr);
}

/*
int main(void)
{
    char str[10] = "blabla";
    ft_memset(str + 3, 'e', 3*sizeof(char));
    printf("test ft_memset : %s\n", str); 
    return(0);
}
*/
