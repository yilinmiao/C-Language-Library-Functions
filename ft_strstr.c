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

char	*ft_strstr(const char *big, const char *little)
{
	const char *s1;
	const char *s2;

	if (*little == '\0')
		return ((char*)big);
	while (*s1 != '\0')
	{
		s1 = big;
		s2 = little;
		while (*s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return ((char*)big);
		big++;
	}
	return (NULL);
}
