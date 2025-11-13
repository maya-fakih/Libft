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

static int	is_sep(char c, const char *set)
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

static size_t	calclen(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] && is_sep(s1[i], set))
		i++;
	while (s1[i] && !is_sep(s1[i], set))
	{
		j++;
		i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	result = NULL;
	result = (char *)malloc(calclen(s1, set) + 1);
	if (!result)
		return (NULL);
	while (s1[i] && is_sep(s1[i], set))
		i++;
	while (s1[i] && !is_sep(s1[i], set))
		result[j++] = s1[i++];
	result[j] = '\0';
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strtrim("hehe h h he ehe mayah", " he"));
// }
