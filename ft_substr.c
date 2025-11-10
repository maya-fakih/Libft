/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:30:42 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/10 18:30:46 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str =(char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (start > ft_strlen(s) - 1)
	{
		str[0] = '\0';
		return (str);
	}
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	char s[]= "i dont think this is right -maha";
// 	printf("%s", ft_substr(s, 5, 200));
// }