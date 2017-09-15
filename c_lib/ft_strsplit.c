/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 22:51:27 by ymiao             #+#    #+#             */
/*   Updated: 2017/08/26 22:51:35 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_word(char const *s, char c)
{
	int		i;
	int		num;
	int		mark;

	i = 0;
	num = 0;
	mark = 1;
	while (s[i])
	{
		if (s[i] == c)
			mark = 1;
		if (s[i] != c && mark == 1)
		{
			mark = 0;
			num++;
		}
		i++;
	}
	return (num);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		n_word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	n_word = get_word(s, c);
	str = (char**)malloc(sizeof(char*) * (n_word + 1));
	if (!str)
		return (NULL);
	str[n_word] = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i++] != c)
		{
			str[j] = ft_strnew(ft_get_word_len(&s[i - 1], c) + 1);
			ft_strncpy(str[j], &s[i - 1], ft_get_word_len(&s[i - 1], c));
			i = i - 1 + ft_get_word_len(&s[i - 1], c);
			j++;
		}
	}
	return (str);
}
