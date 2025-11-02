 #include <string.h>

 void	*memmove(void *dest, const void *src, size_t n)
 {
	char *d;
	const char *s;
	char aux[n];

	d = dest; 
	s = src;
	memcpy(aux, s, n);
	memcpy(d, aux, n);
	return (dest);
 }
