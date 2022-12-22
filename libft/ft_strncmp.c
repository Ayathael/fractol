/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:16:48 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 10:46:27 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	x;

	x = 0;
	while (n && (s1[x] != '\0') && (s1[x] == s2[x]))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int main()
{
    char    s1[10] = "nya";
    char    s2[10] = "nya";
    size_t  n;

    n = 10;
    printf("test ft_strncmp : %d\n", ft_strncmp(s1, s2, n));
    return (0);
}
 */
