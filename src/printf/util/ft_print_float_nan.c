/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float_nan.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:03:18 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:46:19 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

static int	ft_calc_width(
	union u_double n,
	int n_len,
	t_format *pf)
{
	if ((pf->flag.plus || pf->flag.blank) && !n.bit.sign)
		++n_len;
	return (n_len);
}

static void	ft_print_flag(union u_double n, t_format *pf)
{
	if (pf->flag.plus && !n.bit.sign)
		ft_putchar_out(pf->out, '+');
	else if (pf->flag.blank && !n.bit.sign)
		ft_putchar_out(pf->out, ' ');
}

static void	ft_print_format(
	union u_double n,
	int cnt,
	t_format *pf,
	char *n_str)
{
	if (!pf->flag.dash)
	{
		ft_putchar_n_out(pf->out, cnt - \
			ft_calc_width(n, ft_strlen(n_str), pf), ' ');
		ft_print_flag(n, pf);
		ft_putstr_out(pf->out, n_str);
	}
	else
	{
		ft_print_flag(n, pf);
		ft_putstr_out(pf->out, n_str);
		ft_putchar_n_out(pf->out, cnt - \
			ft_calc_width(n, ft_strlen(n_str), pf), ' ');
	}
}

int			ft_print_float_nan(union u_double n, t_format *pf)
{
	int		cnt;
	char	*n_str;
	int		n_len;

	if (!(n_str = ft_dtoa(n.d, pf->precision, **pf->ptr)))
		return (-1);
	++(*pf->ptr);
	if (!ft_strncmp(n_str, "nan", 3))
		n.bit.sign = 1;
	n_len = ft_calc_width(n, ft_strlen(n_str), pf);
	cnt = pf->width > n_len ? pf->width : n_len;
	ft_print_format(n, cnt, pf, n_str);
	ft_frees(2, n_str, pf);
	return (cnt);
}
