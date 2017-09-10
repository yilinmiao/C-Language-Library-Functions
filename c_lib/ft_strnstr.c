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

char	*ft_strnstr(const char *big, const char *little, size_t l)
{
	size_t	temp_l;
	char	*temp_big;
	char	*temp_little;

	if (!*little)
		return ((void *)big);
	while (l-- && *big)
	{
		if (*big == *little)
		{
			temp_l = l;
			temp_big = (void *)big + 1;
			temp_little = (void *)little + 1;
			while (temp_l-- && *temp_big && *temp_little
				&& *temp_big == *temp_little)
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
