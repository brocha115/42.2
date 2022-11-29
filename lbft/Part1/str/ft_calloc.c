#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t total;
	void *dst;

	total = nmemb * size;
	dst = malloc(total);

	if (!dst)
		return(0);
	return(ft_memset(dst, 0, total));
}
