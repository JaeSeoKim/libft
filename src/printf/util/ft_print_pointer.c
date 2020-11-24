/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:03:18 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:46:39 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_util.h"

static void	ft_print_flag(t_format *pf)
{
	ft_putstr_out(pf->out, "0x");
}

static int	ft_calc_width(
	int n_len,
	t_format *pf)
{
	int result;

	result = (pf->precision > n_len ? pf->precision : n_len);
	result += 2;
	return (result);
}

static void	ft_print_precision_with_num(
	int n_len,
	t_format *pf,
	char *n_str)
{
	int i;

	i = 0;
	if (n_len < pf->precision)
	{
		while (i < pf->precision - n_len)
		{
			ft_putchar_out(pf->out, '0');
			++i;
		}
	}
	ft_putstr_out(pf->out, n_str);
}

static void	ft_print_format(
	int cnt,
	t_format *pf,
	char *n_str)
{
	if (pf->flag.zero && !pf->flag.dash && !pf->visit_precision)
	{
		ft_print_flag(pf);
		ft_putchar_n_out(pf->out, cnt - \
			ft_calc_width(ft_strlen(n_str), pf), '0');
		ft_print_precision_with_num(ft_strlen(n_str), pf, n_str);
	}
	else if (!pf->flag.dash)
	{
		ft_putchar_n_out(pf->out, cnt - \
			ft_calc_width(ft_strlen(n_str), pf), ' ');
		ft_print_flag(pf);
		ft_print_precision_with_num(ft_strlen(n_str), pf, n_str);
	}
	else
	{
		ft_print_flag(pf);
		ft_print_precision_with_num(ft_strlen(n_str), pf, n_str);
		ft_putchar_n_out(pf->out, cnt - \
			ft_calc_width(ft_strlen(n_str), pf), ' ');
	}
}

int			ft_print_pointer(va_list ap, t_format *pf)
{
	long long int	n;
	int				cnt;
	char			*n_str;
	int				n_len;

	n = (long long)va_arg(ap, void *);
	n_str = ft_convert_base_custom(n, "0123456789abcdef", 16, pf);
	n_len = ft_strlen(n_str);
	cnt = pf->width > n_len + 2 ? pf->width : n_len + 2;
	cnt = pf->precision + 2 > cnt ? pf->precision + 2 : cnt;
	ft_print_format(cnt, pf, n_str);
	++(*pf->ptr);
	ft_frees(2, n_str, pf);
	return (cnt);
}
