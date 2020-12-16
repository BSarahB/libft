#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*src2;

	i = 0;
	src2 = (char *)src;
	if (!src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src2[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}