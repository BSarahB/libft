#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;
	if (fd < 0)
		return ;
	nbr = (unsigned int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar_fd(nbr + '0', fd);
	}
}