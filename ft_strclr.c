/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 23:31:37 by ymiao             #+#    #+#             */
/*   Updated: 2017/08/20 23:31:37 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_clr(char *s)
{
	while (*s)
		*s++ = '\0';
}
