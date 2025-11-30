#include "libft.h"

char	minmaj(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	else
		return (c - 32);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*scpy;
	char	*ss;
	int		i;

	i = 0;
	ss = (char *)s;
	scpy = malloc((ft_strlen(s) + 1));
	if (!scpy)
	{
		return (NULL);
	}
	while (ss[i])
	{
		scpy[i] = f(i, ss[i]);
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}