/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:30:04 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/05 19:30:06 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = size;
	while (*dst && counter > 0 && counter--)
		dst++;
	while (*src && counter > 1 && counter--)
		*dst++ = *src++;
	if (counter == 1)
		*dst = '\0';
	return (size - counter);
}
