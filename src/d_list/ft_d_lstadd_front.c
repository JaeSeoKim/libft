/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:55:57 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/20 15:45:01 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_d_lstadd_front(t_d_list **lst, t_d_list *new_list)
{
	if (*lst == NULL)
	{
		*lst = new_list;
		return ;
	}
	new_list->next = *lst;
	(*lst)->prev = new_list;
	*lst = new_list;
}
