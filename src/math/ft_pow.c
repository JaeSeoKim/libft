/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:59:36 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 04:57:29 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long double	ft_pow(long double a, long double n)
{
	long double	result;

	result = a;
	while (n-- > 1)
		result *= a;
	return (result);
}
