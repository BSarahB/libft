#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;

	i = 0;
	if (!s || !(*f))
		return (NULL);
	if(!(dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		dst[i] = f(i, (char)s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}