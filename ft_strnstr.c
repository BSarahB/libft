#include "libft.h"

char	*ft_strnstr(const char *haystack,const char *needle, size_t len)
{
	size_t i;
	size_t z;

	i = 0;
	z = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (needle[z] == haystack[i + z] && i + z < len)
		{
			z++;
			if (needle[z] == '\0')
				return ((char *)&haystack[i]);
		}
		z = 0;
		i++;
	}
	return (NULL);
}