#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == 0)
		return ((char *) &haystack[i - j]);
	while (haystack[i] != '\0' && len != 0)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (needle[j] == '\0')
		{
			if (j > 0)
				return ((char *) &haystack[i - (j - 1)]);
			else
				return ((char *) &haystack[i - j]);
		}
		len--;
		i++;
	}
	return (NULL);
}
