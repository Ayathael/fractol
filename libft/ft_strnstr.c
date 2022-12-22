/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:17:22 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 11:19:25 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	char	*strbig;
	char	*strlittle;
	size_t	x;
	size_t	y;

	strbig = (char *)big;
	strlittle = (char *)little;
	x = 0;
	if (strlittle[x] == '\0' || little == NULL)
		return ((char *)big);
	while (big[x] != '\0' && x < n)
	{
		y = 0;
		while (strlittle[y] == strbig[x + y] && x + y < n)
		{
			if (strlittle[y + 1] == '\0')
			{
				return ((char *)big + x);
			}
			y++;
		}
		x++;
	}
	return (NULL);
}

/*
int main()
{
    char str1[10] = "nyanyunya";
    char str2[10] = "nyu";
    printf("test ft_strnstr : %s\n",ft_strnstr(str1, str2, '8'));
    return(0);
}
*/
