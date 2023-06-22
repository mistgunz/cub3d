
#include "libft.h"
#include <stdint.h>

void	ft_putnbr_xup(uintptr_t nbr, int fd, int *count)
{	
	if (nbr >= 16)
	{
		ft_putnbr_xup(nbr / 16, fd, count);
		ft_putnbr_xup(nbr % 16, fd, count);
	}
	else
		ft_putchars_fd("0123456789ABCDEF"[nbr], fd, count);
}
