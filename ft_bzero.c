#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
	unsigned char ch;

	ch = 0;
	while (n != 0)
	{
		*(unsigned char*)s = ch;
		s++;
		n--;
	}
	return (s);
}
