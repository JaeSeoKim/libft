/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:55:57 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/20 12:26:34 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_d_list	*ft_d_lstnew(void	*content)
{
	t_d_list	*lst;

	lst = malloc(sizeof(t_d_list));
	if (lst == NULL)
		return (0);
	lst->next = 0;
	lst->prev = 0;
	lst->content = content;
	return (lst);
}
