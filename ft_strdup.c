/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:03:11 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/01/03 01:03:14 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	char	*s1;
	s1 = (char *)s;
	int		len_s;

	len_s = ft_strlen(s1);
	if (!(dst = (char*)malloc(sizeof(*dst) * (len_s + 1))))
	    return (NULL);
	ft_strlcpy(dst, s, len_s + 1);
	return (dst);
}
