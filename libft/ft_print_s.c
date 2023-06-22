#include "libft.h"

void	ft_print_s(char *stringa, int fd, int *count)
{
	if (!stringa)
		ft_putstrs_fd("(null)", fd, count);
	else
		ft_putstrs_fd(stringa, fd, count);
}
