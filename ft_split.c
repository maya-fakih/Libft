/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:48:31 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/10 23:48:33 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
    int	i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		if (!s[i] && s[i - 1] == c)
			return (words);
		words++;
	}
	return (words);
}

static char **array_creator(char const *s, char c, char **words)
{
	int	i;
	int j;
	int k;
	int l;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] !=c && s[j])
			j++;
		words[k] = malloc ((j - i + 1) * sizeof (char));
		if (!words[k])
			return (NULL);
		l = 0;
		while (i < j)
			words[k][l++] = s[i++];
		words[k++][l] = '\0';
	}
	words[k] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char **words;

	words = (char **)malloc((count_words(s, c) +1)* sizeof (char *));
	if (!words)
		return (NULL);
	return (array_creator(s, c, words));
}

// #include <stdio.h>
// int main()
// {
// 	//printf("%i", count_words("hey its late now", 32));
// 	char **grid = ft_split("hey   my name is maya how about you", 32);
// 	int k = 0;
// 	while (grid[k])
// 	{
// 		printf("%s", grid[k]);
// 		printf("\n");
// 		k++;
// 	}
// }
