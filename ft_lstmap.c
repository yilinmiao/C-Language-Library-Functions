/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <ymiao@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 17:37:36 by ymiao             #+#    #+#             */
/*   Updated: 2017/09/01 17:37:38 by ymiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*root;
	t_list	*cur;

	root = f(lst);
	cur = root;
	if (root == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		cur->next = f(lst);
		if (cur->next == NULL)
			return (NULL);
		cur = cur->next;
	}
	return (root);
}
