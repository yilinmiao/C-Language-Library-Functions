/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:46:08 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/05 18:46:10 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*ret;
	size_t	start;

	ret = (char *)dst;
	start = n;
	while (*src && n--)
		*dst++ = *src++;
	if (n < start)
		ft_bzero(dst, n);
	return (ret);
}
