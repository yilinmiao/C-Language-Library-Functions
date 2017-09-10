/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 22:29:19 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/19 22:29:20 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	const char *big_it;
	const char *little_it;

	if (*little == '\0')
		return ((char*)big);
	while (*big != '\0')
	{
		big_it = big;
		little_it = little;
		while (*little_it != '\0' && *big_it == *little_it)
		{
			big_it++;
			little_it++;
		}
		if (*little_it == '\0')
			return ((char*)big);
		big++;
	}
	return (NULL);
}
