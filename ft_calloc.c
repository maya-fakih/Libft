/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:56:05 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/08 17:57:01 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void			*result;
	unsigned char	*res;
	int				i;

	i = 0;
	if (nmemb * size > INT_MAX || size == 0 || nmemb == 0)
		return (NULL);
	result = malloc(nmemb * size);
	if (result == NULL)
		return (result);
	res = (unsigned char *)result;
	while (i < (nmemb * size))
		res[i++] = 0;
	return (result);
}
