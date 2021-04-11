/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:13:28 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:44:39 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strdup - duplicate a string
*/

char	*ft_strdup(const char *s)
{
	return (ft_strndup(s, ft_strlen(s)));
}
