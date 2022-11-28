#include "libft.h"

t_list  *ft_lstnew(void *content)
{
	t_list	*start;

	start = malloc(sizeof(t_list));
	(*start).next = NULL;
	(*start).content = content;
	return (start);
}
