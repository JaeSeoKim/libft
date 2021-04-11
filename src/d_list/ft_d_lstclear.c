/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:33:26 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/20 14:44:03 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_d_lstclear(t_d_list **lst, void (*del)(void*))
{
	t_d_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = 0;
}
