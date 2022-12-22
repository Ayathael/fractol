/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:15:39 by sroger            #+#    #+#             */
/*   Updated: 2022/10/17 11:35:25 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{	
	int		x;
	int		y;
	char	*str;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	str = malloc((x +1) * sizeof(char));
	y = 0;
	if (!str)
	{
		return (0);
	}
	while (x > y)
	{
		str[y] = s[y];
		y++;
	}
	str[y] = 0;
	return (str);
}
/*
int main()
{
    char *str;
    str = ft_strdup("lorem ipsum dolor sit amet");
    printf("test ft_strdup : %s\n", str);
    return(0); 
}*/
