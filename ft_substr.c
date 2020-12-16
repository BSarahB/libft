#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(!s)
		return (NULL);
	if(!(tab = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[j])
	{
		if (start <= j && i < len)
		{
			tab[i] = s[j];
			i++;
		}
		j++;
	}
	tab[i] = '\0';
	return (tab);
}