/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_out.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:30:02 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:49:44 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

void	ft_putwchar_out(char **out, int unicode)
{
	char	*tmp;

	if (out)
	{
		tmp = ft_encoding_utf8_char(unicode);
		ft_putstr_out(out, tmp);
		free(tmp);
	}
	else
		ft_putwchar_fd(unicode, 1);
}
