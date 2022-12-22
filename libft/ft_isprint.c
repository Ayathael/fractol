/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:12:47 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:34:35 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    printf("test isascii : %d\n", ft_isascii('4'));
    return(0);
}
*/
