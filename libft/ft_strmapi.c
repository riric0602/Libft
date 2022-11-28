#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;

	new = malloc(ft_strlen(s) + 1);
	if (!s)
		return (NULL);
	while (*s)
	{
		*new = (*f)(*s);
		new++;
		s++;
	}
	*new = '\0';
	return (new);
}