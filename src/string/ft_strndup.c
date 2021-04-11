/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:11:54 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:42:34 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (result == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}
