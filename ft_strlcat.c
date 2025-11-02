/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 22:10:23 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/02 22:10:25 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t ft_strlcat(char * dest, char * src, size_t size)
{
    size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size < destlen + 1)
		return (destlen + srclen);
	i = destlen;
	j = 0;
	while (src[j] && (i < size - destlen -1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (destlen + srclen);
}
