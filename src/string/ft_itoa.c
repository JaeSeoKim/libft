/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 03:15:26 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:50:48 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digist(int n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_write_nbrber(char *dest, unsigned int n)
{
	if (n < 10)
		*dest = n + '0';
	else
	{
		*dest = n % 10 + '0';
		ft_write_nbrber(dest - 1, n / 10);
	}
}

/*
** ft_itoa - convert a integer to an string
*/

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*result;
	size_t			len;

	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		len = ft_count_digist(n);
		((n < 0) && (++len));
		result = (char *)malloc(sizeof(char) * (len + 1));
		if (result == NULL)
			return (0);
		ft_write_nbrber((result + len - 1), n < 0 ? -nbr : nbr);
		if (n < 0)
			*result = '-';
		result[len] = '\0';
	}
	return (result);
}
