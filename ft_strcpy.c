/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:29:42 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/05 18:29:45 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcpy(char *dst, const char *src)
{
	char	*ret;

	if (!dst || !src)
		return (dst);
	ret = (char *)dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}
