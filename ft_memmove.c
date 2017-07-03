/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 21:31:37 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/02 21:31:39 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char*)dst;
	strsrc = (char*)src;
	if (strsrc > strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (--len >= 0)
		{
			*strdst-- = *strsrc--;
		}
	}
	else
	{
		while (--len >= 0)
		{
			*strdst++ = *strsrc++;
		}
	}
	return (dst);
}
