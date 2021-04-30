#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	while (s[i] != '\0')
		i++;
	res = (char *) malloc(sizeof (char)*(i + 1));
	if (NULL == res)
		return (NULL);
	res[i+1] = '\0';
	while (i != 0)
	{
		res[i] = f(i, s[i]);
		i--;
	}
	res[0] = f(i, s[0]);
	return (res);
}
