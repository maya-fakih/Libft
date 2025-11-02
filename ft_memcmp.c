/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 23:17:17 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/02 23:17:19 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *S1;
	unsigned char *S2;
	size_t i;

	S1 = s1;
	S2 = s2;
	i = 0;
	while(S1[i] == S2[i] && S1[i] && S2[i] && i <= n)
		i++;
	return(S1[i] - S2[i]);
}
