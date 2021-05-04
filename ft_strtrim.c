#include "libft.h"

size_t	ft_countlen(char const *str);
char	*ft_trim_left(char const *s1, char const *set, size_t len_s1, size_t len_set);
char	*ft_trim_right(char const *s1, char const *set, size_t len_s1, size_t len_set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	char	*sub_res;
	char	*res;

	len_s1 = ft_countlen(s1);
	len_set = ft_countlen(set);
	if (len_s1 == 0)
		return ("");
	sub_res = ft_trim_left(s1, set, len_s1, len_set);
	if (sub_res == NULL)
		return (NULL);
	len_s1 = ft_countlen(sub_res);
	res = ft_trim_right(sub_res, set, len_s1, len_set);
	if (res == NULL)
		return (NULL);
	free(sub_res);
	return (res);
}

char	*ft_trim_left(char const *s1, char const *set, size_t len_s1, size_t len_set)
{
	size_t	i;
	size_t	j;
	size_t	to_del;
	char	*res;

	i = 0;
	to_del = 0;
	while(i != len_s1 && j != len_set)
	{
		j = 0;
		while (j != len_set)
		{
			if (s1[i] == set[j])
			{
				to_del++;
				break;
			}
			j++;
		}
		i++;
	}
	res = (char *)malloc(sizeof(char)*(len_s1 - to_del + 1));
	if (NULL == res)
		return (NULL);
	i = 0;
	j = 0;
	while (i != to_del)
		i++;
	while (i != len_s1)
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_trim_right(char const *s1, char const *set, size_t len_s1, size_t len_set)
{
	size_t	i;
	size_t	j;
	size_t	to_del;
	char	*res;

	i = len_s1 - 1;
	to_del = 0;
	while(i != 0 && j != len_set)
	{
		j = 0;
		while (j != len_set)
		{
			if (s1[i] == set[j])
			{
				to_del++;
				break;
			}
			j++;
		}
		i--;
	}
	res = (char *)malloc(sizeof(char)*(len_s1 - to_del + 1));
	if (NULL == res)
		return (NULL);
	i = len_s1 - to_del + 1;
	while (i != 0)
	{
		res[i] = s1[i];
		i--;
	}
	res[len_s1 - to_del] = '\0';
	res[0] = s1[0];
	return (res);
}

size_t	ft_countlen(char const *str)
{
	size_t	i;

	i = 0;
	while(*str != '\0')
	{
		str++;
		i++;
	}
	return(i);
}
