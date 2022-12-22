/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:12:16 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:33:17 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
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
