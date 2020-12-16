#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1);
	end = end - 1;
	if (end != 0)
		{
			while (s1[end] && (ft_strchr(set, s1[end]) != 0))
				end--;
		}
	while (s1[start] && (ft_strchr(set, s1[start]) != 0))
		start++;
	len = (end - start) + 1;	
	return (ft_substr(s1, start, len));
}