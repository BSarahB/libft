#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	write(fd, "\n", 1);
}