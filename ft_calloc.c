#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*moncalloc;
	size_t	nbr;

	nbr = elementCount * elementSize;
	moncalloc = malloc(nbr);
	if (!moncalloc)
		return (NULL);
	ft_bzero(moncalloc, nbr);
	return (moncalloc);
}