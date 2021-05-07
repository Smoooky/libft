#include "libft.h"

static size_t	ft_countlen(char const *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;
	size_t	j;

	len_s = ft_countlen(s);
	j = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while ((start < len_s) && (len - j > 0))
	{
		res[j] = s[start];
		start++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

static size_t	ft_countlen(char const *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
