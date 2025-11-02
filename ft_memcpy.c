/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 00:43:28 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/02 00:43:29 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char 			*d;
	const	char	*s;

	i = 0; 
	s = src;
	d = dest;
	while (i < n)
	{	
		d[i] = s[i];
		i++;
	}
	return (d);
}
