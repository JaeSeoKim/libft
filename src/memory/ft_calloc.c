/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 09:43:49 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 04:59:05 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** fr_calloc- allocate and free dynamic memory
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (result == NULL)
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}
