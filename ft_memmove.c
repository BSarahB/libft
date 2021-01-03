/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:00:05 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/01/03 01:00:07 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*s;
	unsigned char			*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}
