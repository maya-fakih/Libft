/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:12:46 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/02 23:12:47 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = s;
	i = 0;
	while (src[i] && i < n)
	{
		if (src[i] == c)
			return ((char *)src + i);
		i++;
	}
	if (src[i] == c)
		return ((char *)src + i);
	return (0);
}


