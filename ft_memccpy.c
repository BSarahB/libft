#include "libft.h"


void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n > 0)
	{
		*d = *s;
		d++;
		if (*s == (unsigned char)c)
			return (d);
		s++;
		n--;
	}
	return (NULL);
}