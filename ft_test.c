/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:22:28 by jaeskim           #+#    #+#             */
/*   Updated: 2020/11/24 22:44:08 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*line;
	int		fd;

	fd = open("readme.md", O_RDONLY);

	while (get_next_line(fd, &line))
	{
		ft_printf("%s\n", line);
		free(line);
	}
	ft_printf("%s\n", line);
	free(line);
}
