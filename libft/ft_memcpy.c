#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptd;
	char	*pts;
	size_t	i;

	ptd = (char *)dest;
	pts = (char *)src;
	i = 0;
	while (i < n)
	{
		ptd[i] = pts[i];
		i++;
	}
	return (dest);
}
