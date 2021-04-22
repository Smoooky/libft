#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	ch = c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		i--;
		if (s[i] == ch)
			return ((char*) &s[i]);
	}
	return(NULL);
}