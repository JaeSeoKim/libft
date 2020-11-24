/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_extend_type.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 18:13:44 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:45:46 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

int		ft_parse_extend_type(va_list ap, t_format *pf)
{
	char	**format;

	format = pf->ptr;
	if (**format == 'h')
		pf->h_count += 1;
	if (**format == 'l')
		pf->l_count += 1;
	++(*format);
	return (ft_parse_check(ap, pf));
}
