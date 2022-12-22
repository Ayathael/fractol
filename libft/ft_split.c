/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:47:12 by sroger            #+#    #+#             */
/*   Updated: 2022/10/19 11:23:25 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

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

int	ft_word(char const *s, char c)
{
	int	x;
	int	word;

	x = 0;
	word = 0;
	while (s && (s[x] != '\0'))
	{
		if (s[x] != c)
		{
			while (s[x] != c && (s[x] != '\0'))
				x++;
			word++;
		}
		else
			x++;
	}
	return (word);
}

int	ft_size_word(char const *s, char c, int x)
{
	int	len;

	len = 0;
	while (s[x] != c && (s[x] != '\0'))
	{
		len++;
		x++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	x;
	int		y;
	int		word;
	char	**str;
	int		len;

	x = 0;
	y = 0;
	word = ft_word(s, c);
	str = malloc((word + 1) * sizeof(char *));
	if (str == NULL)
		return (0);
	while (y < word)
	{
		while (s[x] == c)
			x++;
		len = ft_size_word(s, c, x);
		str[y] = ft_substr(s, x, len);
		if (str[y] == NULL)
			return (NULL);
		y++;
		x = x + len;
	}
	str[y] = 0;
	return (str);
}
/*
int main()
{
    char** splitted;
    int x;
    int nb_words;

    x = 0;
    char str[100] = "bla nya";
    splitted = ft_split(str, 'n');
    nb_words = ft_word(str, 'n');
    while (x < nb_words)
    {
        printf("%s\n", splitted[x]);
        x++;
    }
    return(0);
}
*/
