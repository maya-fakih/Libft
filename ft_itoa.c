#include "libft.h"

char	*ft_itoa(int n)
{
	char *num;
	long int n1;
	size_t len;
	
	len = 0;
	n1 = (long int) n;
	while ( n != 0)
	{
		n /= 10;
		len++;
	}
	num = malloc (12);
	if (!num)
		return (NULL);
	if (n1 < 0)
		n1 *= -1;

	
}
//this needs work 