/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:49:35 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/20 12:59:25 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_malloc(void **dst, size_t size)
{
	*dst = malloc(size);
	if (*dst == NULL)
		return (0);
	return (1);
}
