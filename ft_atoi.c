#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	dig;
	int	sign;
	int	tens;

	sign = 1;
	i = 0;
	res = 0;
	dig = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		sign = sign * -1;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		dig++;
		i++;
	}
	tens = 1;
	i--;
	while (dig != 0)
	{
		res = res + (str[i] - 48) * tens;
		tens = tens * 10;
		dig--;
		i--;
	}
	return (res * sign);
}

