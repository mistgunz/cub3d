
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	c;
	size_t	i;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}
