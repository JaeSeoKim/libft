/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:17:14 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:41:10 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_substr - A new String containing the extracted characters
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (0);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}
