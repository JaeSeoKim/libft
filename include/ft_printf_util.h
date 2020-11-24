/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 21:31:37 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 21:49:00 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTIL_H
# define FT_PRINTF_UTIL_H

# include "libft.h"
# include "ft_printf_util_type.h"

int			ft_print(char **out, const char *format, va_list ap);

int			ft_init_parsing(char **out, char **format, va_list ap, int *cnt);
int			ft_parse_check(va_list ap, t_format *pf);
int			ft_parse_flag(va_list ap, t_format *pf);
int			ft_parse_width(va_list ap, t_format *pf);
int			ft_parse_precision(va_list ap, t_format *pf);
int			ft_parse_extend_type(va_list ap, t_format *pf);
int			ft_parse_type(va_list ap, t_format *pf);

int			ft_print_number(va_list ap, t_format *pf);
int			ft_print_unsigned_number(va_list ap, t_format *pf);
int			ft_print_char(va_list ap, t_format *pf);
int			ft_print_string(va_list ap, t_format *pf);
int			ft_write_cnt(va_list ap, t_format *pf);
int			ft_print_percent(t_format *pf);
int			ft_print_octal(va_list ap, t_format *pf);
int			ft_print_hex(va_list ap, t_format *pf);
int			ft_print_pointer(va_list ap, t_format *pf);
int			ft_print_float(va_list ap, t_format *pf);
int			ft_print_float_nan(union u_double n, t_format *pf);

t_ll		ft_get_extend_id(va_list ap, t_format *pf);
t_ull		ft_get_extend_u(va_list ap, t_format *pf);
wint_t		ft_get_extend_c(va_list ap, t_format *pf);
char		*ft_get_extend_s(va_list ap, t_format *pf);


t_format	*ft_init_format(char **out, char **format, int *cnt);

void		ft_putchar_out(char **out, int c);
void		ft_putwchar_out(char **out, int unicode);
void		ft_putchar_n_out(char **out, int n, int c);
void		ft_putstr_out(char **out, char *s);

char		*ft_convert_base_custom(
			t_ull num,
			const char *base_set,
			int base,
			t_format *pf);
char		*ft_n_encoding_utf8(wchar_t *unicode, int n);
char		*ft_custom_dtoa(double n, t_format *pf, char spec);

#endif
