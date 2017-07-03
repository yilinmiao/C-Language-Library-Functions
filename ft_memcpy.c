/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 21:31:06 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/02 21:31:08 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*strdst;
	char		*strsrc;

	strdst = (char*)dst;
	strsrc = (char*)src;
	while (--n >= 0)
	{
		*strdst++ = *strsrc++;
	}
	return (dst);
}
