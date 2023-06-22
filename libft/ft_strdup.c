
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*d;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) +1);
	d = (char *)src;
	if (!dest)
		return (NULL);
	while (d[i])
	{
		dest[i] = d[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

