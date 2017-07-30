/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 10:44:02 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/29 10:44:04 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	temp_len;
	char	*temp_big;
	char	*temp_little;

	if (!*small)
		return ((void *)big);
	while (len-- && *big)
	{
		if (*big == *small)
		{
			temp_len = len;
			temp_big = (void *)big + 1;
			temp_little = (void *)small + 1;
			while (temp_len-- && *temp_big && *temp_little && *temp_big == *temp_little)
			{
				++temp_big;
				++temp_little;
			}
			if (!*temp_little)
				return ((void *)big);
		}
		big++;
	}
	return (NULL);

}
