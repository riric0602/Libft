/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:02:12 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/29 16:02:12 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_delcontent(t_list *new, void (*del)(void *))
{
	t_list	*p;

	while (new)
	{
		p = new->next;
		(*del)(new->content);
		free(new);
		new = p;
	}
	new = NULL;
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new = 0;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
			return (ft_delcontent(new, del));
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
