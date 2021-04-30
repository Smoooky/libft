#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i != start)
		i++;
	res = (char*)malloc(sizeof(char)*(len + 1));
	if (res == NULL)
		return (NULL);
	while ((s[i] != '\0') && (len - j != 0))
	{
		res[j] = s[i];
		i++;
		j++;
	}
	while (j++ != len)
		res[j] = '\0';
	res[j] = '\0';
	return (res);
}
