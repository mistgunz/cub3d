#include "libft.h"

void	ft_putchars_fd(char c, int fd, int *count)
{	
	write(fd, &c, 1);
	*count += 1;
}
