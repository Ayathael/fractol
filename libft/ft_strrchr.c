/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:18:45 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 10:43:46 by sroger           ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen((char *)s);
	while (x >= 0)
	{
		if (s[x] == (char)c)
			return ((char *)s + x);
		x--;
	}
	return (NULL);
}

/*
int main()
{
    char str[10] = "tripouille";
    printf("test ft_strrchr : %s\n",ft_strrchr(str,'t' + 256));
    return(0);
}
*/
