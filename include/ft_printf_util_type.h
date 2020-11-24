/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util_type.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 21:31:37 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:37:28 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTIL_TYPE_H
# define FT_PRINTF_UTIL_TYPE_H

typedef struct	s_flag
{
	char	dash;
	char	zero;
	char	blank;
	char	plus;
	char	hash;
}				t_flag;

typedef struct	s_format
{
	t_flag	flag;
	int		width;
	char	visit_precision;
	int		precision;
	int		h_count;
	int		l_count;
	char	**out;
	char	**ptr;
	int		*cnt;
}				t_format;

#endif
