#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) 
{
	t_list *new;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	while (lst)
	{
		new = ft_lstnew((*f)(new->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (prev);
}