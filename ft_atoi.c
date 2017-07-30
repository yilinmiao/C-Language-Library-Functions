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

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' ||
	c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	while (ft_isspace(*str))
		++str;
	if (!ft_isdigit(*str))
	{
		if (*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	while (ft_isdigit(*str))
		total = total * 10 + (*str++ - '0') * sign;
	return (total);
}
