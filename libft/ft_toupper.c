/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:19:24 by sroger            #+#    #+#             */
/*   Updated: 2022/10/14 10:11:30 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (x - 32);
	}
	else
		return (x);
}
/*
int main()
{
    printf("test ft_toupper : %c\n",ft_toupper('b'));
    return(0);
}
*/
