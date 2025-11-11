/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfakih <mfakih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:58:29 by mfakih            #+#    #+#             */
/*   Updated: 2025/11/11 21:58:32 by mfakih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int count_digits(int n)
{
	long num;
	int i;

	i = 0;
	num = (long) n;
	if (n == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while(num)
	{
		num /= 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int n)
{
	int	i;
	long nb;
	char *num;

	i = count_digits(n);
	nb = n;
	num = malloc(count_digits(n) + 1);
	if (!num)
		return (NULL);
	num[i--] = '\0';
	if (nb == 0)
		num[0] = '0';
	else if (nb < 0)
	{
		nb *= -1;
		num[0] = '-';
	}
	while (i >= 0 && num[i] != '-')
	{
		num[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (num);
}

// #include <stdio.h>
// int main()
// {
// 	int n = 21474836487;
// 	//printf("%i", count_digits((n)));
// 	printf("%s", ft_itoa(n));
// }