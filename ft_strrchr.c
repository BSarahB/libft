/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenmesb <mbenmesb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 01:04:57 by mbenmesb          #+#    #+#             */
/*   Updated: 2021/01/03 01:04:59 by mbenmesb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;

	j = (int)ft_strlen((char *)s);
	while (j >= 0)
	{
		if (s[j] == c)
			return ((char *)&s[j]);
		j--;
	}
	return (NULL);
}
