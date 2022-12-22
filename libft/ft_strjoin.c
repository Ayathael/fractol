/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:50:51 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 13:34:23 by sroger           ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char	*str;
	int		x;
	int		y;

	x = 0;
	y = 0;
	str = malloc((ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1) * (sizeof(char)));
	if (str == NULL)
		return (0);
	while (s1[x] != '\0')
	{
		str[x + y] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{	
		str[x + y] = s2[y];
		y++;
	}
	str[x + y] = '\0';
	return (str);
}
/*
int main()
{
    char *str;

    str = ft_strjoin("bla", "nyu");
    printf("test ft_substr : %s\n", str);
    return (0);
}
*/
