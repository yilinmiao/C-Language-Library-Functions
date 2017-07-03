/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 21:31:20 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/02 21:31:22 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char*)dst;
	strsrc = (char*)src;
	while (--n >= 0 && *strsrc != c)
	{
		*strdst++ = *strsrc++;
	}
	if ( n >= 0)
	{
		*strdst++ = *strsrc++;
		return ((void*)strdst);
	}
	else
	{
		return NULL;
	}
}
