#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long i;
	unsigned char ch;

	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
//		printf("%lu\n", i);
		if (((unsigned char *)src)[i] == ch)
			return ((unsigned char *) NULL);
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (i == 0)
		return ((unsigned char *)NULL);
	else
	{
		((unsigned char *)dst)[i] = '\0';
		return (dst);
	}
}










//{
//	unsigned long	i;
//	unsigned char	ch;
//
//	i = 0;
//	ch = (unsigned char) c;
//	while ((i <= n) && (ch != ((unsigned char*)dst)[i - 1]))
//	{
//		((unsigned char*)dst)[i] = ((unsigned char*)src)[i]; // TEST IT WELL
//		i++;
//	}
//	return (dst);
//}

