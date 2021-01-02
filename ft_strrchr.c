#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;

	j = (int)ft_strlen((char *)s);
	while (j >= 0)
	{
		if (s[j] == c)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}