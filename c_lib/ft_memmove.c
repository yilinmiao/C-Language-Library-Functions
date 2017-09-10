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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;

	i = (dst > src) ? len : 1;
	len = (dst > src) ? 0 : len + 1;
	while (i != len)
	{
		((char *)dst)[i - 1] = ((const char *)src)[i - 1];
		i = (dst > src) ? i - 1 : i + 1;
	}
	return (dst);
}
