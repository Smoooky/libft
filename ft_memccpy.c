#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long	i;
	unsigned char	ch;

	i = 0;
	ch = c;
	while ((i <= n)&&(ch != ((char*)dst)[i - 1]))
	{
		((char*)dst)[i] = ((char*)src)[i]; // TEST IT WELL
		i++;
	}
	return (dst);
}

