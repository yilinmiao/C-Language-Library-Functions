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

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	itn;
	char	*it1;
	char	*it2;

	if (!*small)
		return ((void *)big);
	while (n-- && *big)
	{
		if (*big == *small)
		{
			itn = n;
			it1 = (void *)big + 1;
			it2 = (void *)small + 1;
			while (itn-- && *it1 && *it2 && *it1 == *it2)
			{
				++it1;
				++it2;
			}
			if (!*it2)
				return ((void *)big);
		}
		big++;
	}
	return (NULL);

}
