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

static int		ft_wordlen(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

unsigned int	ft_strcount(char *s, char c)
{
	unsigned int	count;

	if (!*s)
		return (0);
	count = 0;
	if (*s != c)
		++count;
	while (*++s)
		if (*s == c && *(s - 1) != c)
			count++;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str2;

	if (!s || !(str2 = (char **)malloc(sizeof(*str2) *
		(ft_strcount(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_strcount(s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(ft_wordlen(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}