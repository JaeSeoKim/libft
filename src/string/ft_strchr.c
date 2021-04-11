/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 23:58:16 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 04:59:44 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strchr - locate character in string
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
