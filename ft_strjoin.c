/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:03:26 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/01/03 01:03:29 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(str = (char *)malloc((len_s1 + len_s2) * sizeof(*str) + 1)))
		return (NULL);
	ft_memmove((void *)str, (void *)s1, len_s1);
	ft_memmove((void *)(str + len_s1), (void *)s2, len_s2 + 1);
	return (str);
}
