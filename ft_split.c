#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


static	char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		size_src;
	int		i;

	i = 0;
	size_src = 0;
	while (src[size_src] && i < n)
		size_src++;
	if (!(dest = (char*)malloc(sizeof(*dest) * (size_src + 1))))
		return (NULL);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	char	**ft_create_tab(char const *s, char c, size_t words_nbr)
{
	char	**tab;
	size_t		i;
	size_t		k;
	size_t		wd_length;

	i = 0;
	k = 0;
	if (!(tab = malloc(sizeof(*tab) * (words_nbr + 1))))
		return (NULL);
	while (k < words_nbr)
	{
		while (s[i] && s[i] == c)
			i++;
		wd_length = 0;
		while ((s[i + wd_length]) && (s[i + wd_length]) != c)
			wd_length++;
		tab[k] = ft_strndup((char *)&s[i], wd_length);
		k++;
		i = i + wd_length;
	}
	tab[k] = 0;
	return (tab);
}

static size_t		ft_words_nbr(const char *s, char c)
{
	size_t i;
	size_t k;
	size_t words_nbr;

	i = 0;
	words_nbr = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		k = 0;
		while (s[i + k] && (s[i + k]) != c)
			k++;
		if (k != 0)
			words_nbr++;
		i = i + k;
	}
	return (words_nbr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t		words_nbr;

	if (!s)
		return (NULL);
	words_nbr = ft_words_nbr(s, c);
	tab = ft_create_tab(s, c, words_nbr);
	return (tab);
}

int main()
{
	char **tab;
	tab = ft_split("salut les amis", ' ');
	int i;
	i = 0;
	while (i < 3)
	{
		printf("%s\n", tab[i]);		
		i++;
	}
}
