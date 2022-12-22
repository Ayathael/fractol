/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:13:26 by sroger            #+#    #+#             */
/*   Updated: 2022/10/17 16:55:50 by sroger           ###   ########.fr       */
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

int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	x;
	size_t	y;
	size_t	len;

	x = 0;
	y = ft_strlen((char *) s1) - 1;
	while (is_in_set (s1[x], set) == 1)
		x++;
	while (is_in_set (s1[y], set) == 1)
		y--;
	len = ft_strlen(s1) - (ft_strlen(s1) - (y +1)) - x;
	trimmed = ft_substr(s1, x, len);
	return (trimmed);
}
/*
int main()
{
	char *str;
	char *set;

    str = "aablaaa";
	set = "a";

    printf("test ft_strtrim : %s\n", ft_strtrim(str, set));
    return (0);
}
*/
