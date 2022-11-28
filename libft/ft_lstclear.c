#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (del && lst && *lst)
	{
		while (*lst != NULL)
		{
			*p = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = p;
		}
		lst = NULL;
	}
}