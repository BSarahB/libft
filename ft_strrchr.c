#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*str_c;

	str = (char *)s;
	str_c = NULL;
	while (*str)
		{
			if (*str == (unsigned char)c)
					str_c = str;
			str++;
		}
	if (c == '\0')
		return (str_c);
	if(str_c != NULL)
		return (str_c);
	return (NULL);
}
