#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*scpy;
	int				i;
	int				j;

	j = (int)n;
	i = 0;
	scpy = (unsigned char *)s;
	while (i < j)
	{
		if (scpy[i] == (unsigned char)c)
		{
			return (&scpy[i]);
		}
		i ++;
	}
	return (NULL);
}