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
	int		len;
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (s[i] != '\0' && ft_isspace(s[i]))
		i++;
	if (i == len)
		return (ft_strnew(0));
	while (ft_isspace(s[len - 1]))
		len--;
	str = ft_strnew(len - i);
	if (!str)
		return (NULL);
	ft_strncpy(str, s + i, len - i);
	return (str);
}
