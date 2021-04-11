/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 21:09:22 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 04:58:15 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
** ft_memccpy - copy memory area
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = dest;
	sp = src;
	while (n-- > 0)
	{
		*dp++ = *sp++;
		if (*dp == (unsigned char)c)
			return (dp);
	}
	return (0);
}
