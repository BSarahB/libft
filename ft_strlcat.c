/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:03:38 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/01/03 01:03:40 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*src2;

	k = 0;
	src2 = (char *)src;
	j = ft_strlen(src);
	i = ft_strlen(dst);
	if (size < i)
		j = j + size;
	else
		j = j + i;
	while (size != 0 && src2[k] && (size - 1 > i))
	{
		dst[i] = src2[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}
