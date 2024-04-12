
#include "libft.h"

 static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t str_split(char *s, char c, char **matrix)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{	
		while (*s && *s == c)
			s++;
		len = word_len(s, c);
		if (len && matrix)
			matrix[i] = ft_substr(s, 0, len - 1);
		i += (len > 0);
		s += len;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**matrix;
	
	if (!s)
		return (NULL);
	words = str_split((char *)s, c, NULL);
	matrix = ft_calloc(sizeof(char *), (words + 1));
	if (!matrix)
		return (NULL);
	str_split((char *) s, c, matrix);
	return (matrix);
}

int		main()
{
	char		**matrix;
	int			i;

	i = 0;
	matrix = ft_split(".....ola.caralho.fds.puta...", '.');
	while (matrix[i])
	{
		printf("word %d: %s\n", i, matrix[i]);
		i++;
	}
	return (0);
}