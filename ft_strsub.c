/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 23:16:26 by ymiao             #+#    #+#             */
/*   Updated: 2017/08/22 23:16:28 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew_str(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	new_str = ft_strnew(len);
	if (!new_str)
		return (NULL);
	s = s + start;
	i = 0;
	while (i < len)
	{
		new_str[i] = s[i];
		i++;
	}
	return (new_str);
}
