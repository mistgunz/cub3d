#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*pt;

	pt = (char *)s;
	i = 0;
	while (i < n)
	{	
		pt[i] = c;
		i++;
	}
	return (s);
}
