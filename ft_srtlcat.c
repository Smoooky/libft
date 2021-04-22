#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst != '\0')
	{
		i++;
		if (dstsize != 0)
		{
			dst++;
			dstsize--;
		}
	}
	while (*src != '\0')
	{
		i++;
		if(dstsize != 0)
		{
			*dst = *src;
			src++;
			dst++;
			dstsize--;
		}
	}
	*dst = '\0';
	return (i);
}
