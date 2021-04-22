#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char ch;

	ch = c;
	while (len != 0)
	{
		*(unsigned char*)b = ch;
		b++;
		len--;
	}
	return (b);
}
