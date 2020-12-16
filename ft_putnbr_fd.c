#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


void	ft_putnbr_fd(int n, int fd)
{
    char c;
    if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
	    n = -n;
	    write(fd, "-", 1);
	}
	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

void	ft_putnbr_fd1(int n, int fd)
{
	unsigned int	nbr;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}

void	ft_putnbr_fd2(int n, int fd)
{
	unsigned int nbr;
	
	nbr = (unsigned int)n;
	printf("%u, %d\n", nbr, nbr);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(n * -1);
		printf("n<0:             %u, %d\n", nbr, nbr);
	}
	else
		{
			nbr = (unsigned int)n;
			printf("else:             %u, %d\n", nbr, nbr);
		}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		printf(" / et modulo successif");
		ft_putchar_fd(nbr % 10 + '0', fd);
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar_fd(nbr + '0', fd);
	}
}

int main()
{
//ft_putnbr_fd(15, 1);
//printf("\n");
//	ft_putnbr_fd1(15, 1);
//	printf("\n");

ft_putnbr_fd2(-9, 1);

}