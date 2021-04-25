#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && len != 0)
	{
//		printf("i = %lu\n", i);
//		printf("j = %lu\n", j);
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (needle[j] == '\0')
			return ((char *) &haystack[i - (j - 1)]);
		len--;
		i++;
	}
	return (NULL);
}
