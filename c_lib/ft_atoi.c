/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 18:16:08 by ymiao             #+#    #+#             */
/*   Updated: 2017/07/29 18:16:09 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int					sign;
	int					i;
	unsigned long long	total;

	sign = 1;
	total = 0;
	i = 0;
	while (ft_isspace(*str))
		++str;
	if (!ft_isdigit(*str))
	{
		if (*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
		str++;
		i++;
	}
	while (ft_isdigit(*str))
		total = total * 10 + (*str++ - '0');
	if (total > 9223372036854775807 || i >= 19)
		return (sign == -1 ? 0 : -1);
	return (total * sign);
}
