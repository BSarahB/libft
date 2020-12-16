#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(ptr = (void *)malloc(count * size)))
		return (NULL);
	if (ptr)
		ft_bzero(ptr, size * count);
	return (ptr);
}
