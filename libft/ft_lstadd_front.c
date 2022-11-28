#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list  *head = ft_lstnew("first");
	t_list  **p1 = NULL;
	*p1 = head;
	t_list  *new = ft_lstnew("riri");
	ft_lstadd_front(p1, new);
}