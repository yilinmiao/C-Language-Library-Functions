/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 23:56:17 by ymiao             #+#    #+#             */
/*   Updated: 2017/08/21 23:56:18 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = ft_stralloc(s);
	if (new)
	{
		i = -1;
		while (s[++i])
			new[i] = f(i, s[i]);
		new[i] = '\0';
	}
	return (new);
}
