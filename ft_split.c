#include "push_swap.h"
#include <stdlib.h>

int	word_count(char *str, char c)
{
	int		i;
	int		key;
	int		w;

	i = 0;
	w = 0;
	key = 1;
	while (str[i])
	{
		if (str[i] && str[i] != c && key == 1)
		{
			w++;
			key = 0;
		}
		if (str[i] == c)
			key = 1;
		i++;
	}
	return (w);
}

char	*ft_wordup(char *str, char c)
{
	int		i;
	char	*nstr;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	nstr = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != c)
	{
		nstr[i] = str[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	int		key;
	char	**sp;

	i = 0;
	key = 1;
	j = 0;
	sp = malloc(sizeof(char *) * (word_count(str, c) + 1));
	while (str[i])
	{
		if (str[i] && str[i] != c && key == 1)
		{
			sp[j] = ft_wordup(&str[i], c);
			j++;
			key = 0;
		}
		if (str[i] == c)
			key = 1;
		i++;
	}
	sp[j] = NULL;
	return (sp);
}
