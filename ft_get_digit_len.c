/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digit_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 17:13:34 by ymiao             #+#    #+#             */
/*   Updated: 2017/09/08 17:13:35 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_digit_len(int n)
{
	int		count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}
