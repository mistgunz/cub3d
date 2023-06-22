#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		if (*ptr == (char)c)
			return (ptr);
		else
			i++;
		ptr++;
	}
	return (0);
}
