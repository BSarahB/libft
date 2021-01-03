/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:05:11 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/01/03 01:05:13 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*set2;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	set2 = (char *)set;
	s = (char *)s1;
	start = 0;
	while (s[start] && (ft_isset(set2, s[start]) == 1))
		start++;
	len = ft_strlen((char *)&s[start]);
	if (len != 0)
		while (s[start + len - 1]
				&& (ft_isset(set2, s[start + len - 1]) == 1))
			len--;
	return (ft_substr(s1, start, len));
}
