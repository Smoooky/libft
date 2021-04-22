#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*src != '\0')
	{
		if (dstsize != 0)
		{
			*dst = *src;
			dst++;
			dstsize--;
		}
		i++;
		src++;
		*dst = '\0';
	}
	return (i);
}
