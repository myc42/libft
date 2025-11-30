#include "libft.h"

void	*ft_memset( void *pointer, int value, size_t count )
{
	unsigned char	*pointercpy;
	size_t			i;

	i = 0;
	pointercpy = (unsigned char *) pointer;
	while (i < count)
	{
		pointercpy[i] = (unsigned char) value;
		i++;
	}
	return (pointer);
}