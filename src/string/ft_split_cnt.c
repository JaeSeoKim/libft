/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_cnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeskim <jaeskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:02:02 by jaeskim           #+#    #+#             */
/*   Updated: 2021/03/19 06:40:44 by jaeskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s++ != c)
		len++;
	return (len);
}

static size_t	ft_count_word(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

void	ft_free_split(char **s, int cnt)
{
	while (cnt--)
		free(s[cnt]);
	free(s);
}

char	**ft_split_cnt(char const *s, char c, int *cnt)
{
	char	**result;
	size_t	count;
	size_t	wordlen;
	size_t	i;

	count = ft_count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (0);
	i = -1;
	while (++i < count)
	{
		while (*s && *s == c)
			s++;
		result[i] = ft_strndup(s, (wordlen = ft_wordlen(s, c)));
		if (result[i] == NULL)
		{
			ft_free_split(result, i - 1);
			return (0);
		}
		s += wordlen;
	}
	result[count] = 0;
	(*cnt) = count;
	return (result);
}
