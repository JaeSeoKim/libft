/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:59:38 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:45:41 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

int		ft_parse_check(va_list ap, t_format *pf)
{
	char **format;

	format = pf->ptr;
	if (!**format)
	{
		free(pf);
		return (0);
	}
	if (ft_strchr("-0+# ", **format))
		return (ft_parse_flag(ap, pf));
	if (ft_strchr("123456789*", **format))
		return (ft_parse_width(ap, pf));
	if (ft_strchr(".", **format))
		return (ft_parse_precision(ap, pf));
	if (ft_strchr("lh", **format))
		return (ft_parse_extend_type(ap, pf));
	if (ft_strchr("cspdiuxXnfgeo%", **format))
		return (ft_parse_type(ap, pf));
	free(pf);
	return (0);
}
