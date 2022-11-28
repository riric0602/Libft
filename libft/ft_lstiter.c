#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			lst->content = (*f)(lst->content);
			lst = lst->next;
		}
	}
}