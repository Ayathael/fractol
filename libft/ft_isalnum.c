/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:38 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 09:31:44 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= '0' && x <= '9') || ((x >= 'A' && x <= 'Z')
			|| (x >= 'a' && x <= 'z')))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    printf("test isalnum : %d\n", ft_isalnum('4'));
    return(0);
}
*/
