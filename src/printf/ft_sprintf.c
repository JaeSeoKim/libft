/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 01:49:58 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:43:44 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

int			ft_sprintf(char *out, const char *format, ...)
{
	va_list	ap;
	int		cnt;

	va_start(ap, format);
	cnt = ft_print(&out, format, ap);
	out[cnt] = 0;
	va_end(ap);
	return (cnt);
}
