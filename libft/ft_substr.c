/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:48:05 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 12:49:43 by sroger           ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (len > ft_strlen((char *)s))
	{
		len = ft_strlen((char *)s);
	}
	str = malloc((len +1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (s[x] != '\0')
	{
		if (x >= start && y < len)
		{
			str[y] = s[x];
			y++;
		}
		x++;
	}
	str[y] = '\0';
	return (str);
}
/*
int main()
{
    char *str;

    str = ft_substr("tripouille", 0, 42000);
    printf("test ft_substr : %s\n", str);
    return (0);
}
*/
