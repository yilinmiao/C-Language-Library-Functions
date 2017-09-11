/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 17:07:41 by ymiao             #+#    #+#             */
/*   Updated: 2017/09/08 17:07:42 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strcount(char *s, char c)
{
	unsigned int	count;

	if (!*s)
		return (0);
	count = 0;
	if (*s != c)
		count++;
	while (*++s)
		if (*s == c && *(s - 1) != c)
			count++;
	return (count);
}
