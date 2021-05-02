#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char ch;
	int div;

	div = 1000000000;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	else if (n < 0)
	{
		ch = '-';
		write(fd, &ch, 1);
		n = -1 * n;
	}
	while (n/div == 0)
		div = div/10;
	while(div != 0)
	{
		ch = '0' + n/div;
		write(fd, &ch, 1);
		n = n%div;
		div = div/10;
	}
}
