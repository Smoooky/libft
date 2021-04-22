#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		((char*)dst)[i] = ((char*)src)[i]; // TEST IT WELL
		i++;
	}
	((char*)dst)[i] = '\0';
	return (dst);
}
