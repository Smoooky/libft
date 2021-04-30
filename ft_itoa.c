#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		is_pos;
	int		str_size;
	char	*res;

	str_size = 0;
	if (n == -2147483648)
	{
		res = (char *) malloc(sizeof(char) * 12);
		if (NULL == res)
			return (NULL);
		res = "-2147483648";
//		res[11] = '\0';
		return (res);
	}
	else if (n < 0)
	{
		is_pos = 0;
		n = n * -1;
		str_size++;
	}
	else
		is_pos = 1;
	i = n;
	while (i / 10 > 0)
	{
		str_size++;
		i = i / 10;
	}
	str_size++;
	res = (char*)malloc(sizeof(char)*(str_size + 1));
	if (NULL == res)
		return (NULL);
	res[str_size] = '\0';
	str_size--;
	while (n / 10 > 0)
	{
		res[str_size] = '0' + n % 10;
		n = n / 10;
		str_size--;
	}
	res[str_size] = '0' + n % 10;
	str_size--;
	if (is_pos == 0)
		res[str_size] = '-';
	return (res);
}
