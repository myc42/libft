#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	slen;

	if (!s)
		return ;
	slen = ft_strlen(s);
	write(fd, s, slen);
}