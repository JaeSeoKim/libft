/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 08:00:43 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 04:29:13 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_putnbr_fd - Outputs the integer 'n' to the given file descriptor.
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	num = ft_itoa(n);
	ft_putstr_fd(num, fd);
	free(num);
}
