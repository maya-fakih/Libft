/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 22:42:34 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/10 22:42:36 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_sep(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == (unsigned char) c)
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int 	j;
	char	*result;

	i = 0;
	j = 0;
	result = (char *)malloc(ft_strlen(s1) + 1);
	if (!result)
		return (NULL);
	while (s1[i] && is_sep(s1[i],set))
		i++;
	while (s1[i] && !is_sep(s1[i], set))
		result[j++] = s1[i++];
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strtrim("hehe h h he ehe mayah", " he"));
// }
