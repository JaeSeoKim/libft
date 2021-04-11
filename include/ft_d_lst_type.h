/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_lst_type.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:46:37 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/20 11:55:10 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_D_LST_TYPE_H
# define FT_D_LST_TYPE_H

# include "libft.h"

typedef struct s_d_list
{
	struct s_d_list	*next;
	struct s_d_list	*prev;
	void			*content;
}				t_d_list;

#endif
