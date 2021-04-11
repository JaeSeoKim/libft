/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 01:30:33 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:37:31 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strrchr - locate character in string
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	while (slen != 0 && *(s + slen) != c)
		slen--;
	if (*(s + slen) == c)
		return ((char *)(s + slen));
	return (0);
}
