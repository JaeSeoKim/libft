/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:23:56 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/20 21:08:36 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_d_lstadd_back(t_d_list **lst, t_d_list *new_list)
{
	t_d_list	*last;

	if (*lst == NULL)
	{
		*lst = new_list;
		return ;
	}
	last = ft_d_lstlast(*lst);
	last->next = new_list;
	new_list->prev = last;
}
