#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (i > (size - 1))
		{
			dst[j] = src[i];
			j++;
		}
//		else
//			dst[i] = '\0';
		i++;
//		printf("%s\n", dst);
//		printf("%lu\n", i);
	}
	dst[i] = '\0';
	return (i);
}


	//	while (*src != '\0')
//	{
//		printf("%lu\n", i);
//		printf("%lu\n", dstsize);
//		if (i != dstsize - 1)
//		{
//			*dst = *src;
//			dst++;
//		}
//		else
//			*dst = '\0';
//		i++;
//		src++;
//		*dst = '\0';
//	}
//	*dst = *src;
//	return (i);
//}
