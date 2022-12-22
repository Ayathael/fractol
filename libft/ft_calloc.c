/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:13 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 11:57:19 by sroger           ###   ########.fr       */
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	str = malloc(nmemb * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero (str, (nmemb * size));
	return (str);
}
/*
int main()
{
    char *str;
    str = ft_calloc(3, 4);
    printf("test ft_calloc : %s\n", str);
    return(0);
}
*/
