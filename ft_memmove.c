#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;

	i = 0;
	if (dst != NULL || src != NULL)
	{
		while (i < len)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
