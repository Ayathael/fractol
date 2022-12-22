/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroger <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 09:52:26 by sroger            #+#    #+#             */
/*   Updated: 2022/10/24 09:53:20 by sroger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;

	if (del == NULL)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		x = *lst;
		*lst = x->next;
		free(x);
	}
	*lst = NULL;
}
