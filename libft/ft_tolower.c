/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:19:09 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 10:12:37 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_tolower(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (x + 32);
	}
	else
		return (x);
}
/*
int main()
{
    printf("test ft_tolower : %c\n",ft_tolower('B'));
    return(0);
}
*/
