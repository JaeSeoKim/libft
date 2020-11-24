/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:27:47 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:44:30 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

int	ft_init_parsing(char **out, char **format, va_list ap, int *cnt)
{
	t_format *pf;

	if (!(pf = ft_init_format(out, format, cnt)))
		return (-1);
	return (ft_parse_check(ap, pf));
}
