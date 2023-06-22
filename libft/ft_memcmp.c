#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	if (ptr1 == ptr2)
		return (0);
	while (n > 0)
	{
		if (ptr1[i] == ptr2[i])
		{
			i++;
		}
		else if (ptr1[i] > ptr2[i])
			return (1);
		else
			return (-1);
		n--;
	}
	return (0);
}
