/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:10:46 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:40:15 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *ptr, size_t len)
{
	char	*str;

	str = ptr;
	while (len)
	{
		*str = '\0';
		str++;
		len--;
	}
}

/*
int main(void)
{
    char str[10] = "blabla";
    ft_bzero(str + 3, 3*sizeof(char));
    printf("test ft_bzero : %s\n", str); 
    return(0);
}
*/
