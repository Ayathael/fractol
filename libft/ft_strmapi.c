/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:15:46 by sroger            #+#    #+#             */
/*   Updated: 2022/10/19 10:18:18 by sroger           ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*str;

	if (!s)
		return (NULL);
	x = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (0);
	while (s[x] != '\0')
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
/*
char my_func(unsigned int i, char str)
{
     printf("My inner function: index = %d and %c\n", i, str);
     return str - 32;
}

int main()
{
    char str[10] = "hello.";
    printf("The result is %s\n", str);
     char *result = ft_strmapi(str, my_func);
     printf("The result is %s\n", result);
    return 0;
}
 */
