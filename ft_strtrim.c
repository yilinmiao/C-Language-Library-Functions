/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 22:27:11 by ymiao             #+#    #+#             */
/*   Updated: 2017/08/26 22:27:13 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;

	str = ft_stralloc(s);
	if (str)
	{
		i = 0;
		while (*s)
		{
			if (*s != ' ' && *s != '\n' && *s != '\t')
				str[i++] = *s;
			s++;
		}
		str[i] = '\0';
	}
	return (str);
}
