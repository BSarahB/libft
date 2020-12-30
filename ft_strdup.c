#include "libft.h"
// TO DO COMPATIBILITE char *s ft_strlen
char	*ft_strdup(const char *s)
{
	char	*dst;
	char	*s1;
	s1 = (char *)s; //je l utilise pas uhuh cf
	int		len_s; //size_t no?

	len_s = ft_strlen(s1);
	if (!(dst = (char*)malloc(sizeof(*dst) * (len_s + 1))))
	    return (NULL);
	ft_strlcpy(dst, s, len_s + 1);
	return (dst);
}