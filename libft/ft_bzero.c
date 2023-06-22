#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*pt;

	pt = (char *)s;
	i = 0;
	while (i < n)
	{	
		pt[i] = '\0';
		i++;
	}
}
