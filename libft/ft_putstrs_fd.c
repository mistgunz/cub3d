
#include "libft.h"

void	ft_putstrs_fd(char *s, int fd, int *count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchars_fd(s[i], fd, count);
		i++;
	}
}
