#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;

	i = 0;
	while (i < len)
	{
		((char*)dst)[i] = ((char*)src)[i]; // TEST IT WELL OVERLAPSING
		i++;
	}
	return (dst);
}
