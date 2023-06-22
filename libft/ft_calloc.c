#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;

	if (size && nmemb > 2147483647 / size)
		return (NULL);
	p = (char *)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}
