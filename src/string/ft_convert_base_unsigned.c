/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_unsigned.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:56:00 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:35:25 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digist(t_ull n, int base)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n /= base;
		count++;
	}
	return (count);
}

char	*ft_convert_base_unsigned(
	t_ull num,
	const char *base_set,
	int base)
{
	char	*result;
	size_t	len;

	if (num == 0)
		return (ft_strdup("0"));
	len = ft_count_digist(num, base);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (0);
	result[len] = 0;
	while (len)
	{
		result[--len] = base_set[num % base];
		num = num / base;
	}
	return (result);
}
