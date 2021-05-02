#include "libft.h"

int		ft_count_words(char const *s, char c);
char	*ft_add_word(char const *word_star, int len);

char	**ft_split(char const *s, char c)
{
	int is_word;
	int count;
	int i;
	int w_len;
	char **res;

	count = ft_count_words(s, c);
	res = (char**)malloc(sizeof(char*)*(count+1));
	if (NULL == res)
	{
		return (NULL);
	}
	res[count] = NULL;
	count = 0;
	i = 0;
	is_word = 0;
	w_len = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (is_word == 1)
			{
				is_word = 0;
				res[count] = ft_add_word(&s[i - w_len], w_len);
				w_len = 0;
				count++;
			}
		}
		else
		{
			if (is_word == 0)
				is_word = 1;
			w_len++;
		}
		i++;
	}
	if (s[i - 1] != c)
		res[count] = ft_add_word(&s[i - w_len], w_len);
	return (res);
}

char	*ft_add_word(char const *word_star, int len)
{
	int		i;
	char	*res;

	i = 0;
	res = (char*)malloc(sizeof(char)*(len+1));
	if (NULL == res)
		return (NULL);
	while (i != len)
	{
		res[i] = word_star[i];
		i++;
	}
	res[i] = '\0';
	return res;
}

int		ft_count_words(char const *s, char c)
{
	int is_word;
	int count;
	int i;

	i = 0;
	count = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (is_word == 1)
			{
				is_word = 0;
				count++;
			}
		} else
		{
			if (is_word == 0)
				is_word = 1;
		}
		i++;
	}
	return (count);
}