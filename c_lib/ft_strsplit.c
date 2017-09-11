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

static char		*helper(char *dst, const char *src, char c)
{
	while (*src && *src != c)
		*dst++ = *src++;
	*dst = c;
	return (dst);
}

static char		*get_element(const char **s, char c)
{
	char	*str;

	str = (char *)malloc(ft_get_word_len(*s, c) + 1);
	if (!str)
		return (NULL);
	*s = helper(str, *s, c);
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**tab;

	tab = (char **)malloc(ft_strcount((char*)s, c) + 1);
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c)
			*tab++ = get_element(&s, c);
		s++;
	}
	*tab = NULL;
	return (tab);
}
