#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return(0);
	i = 0;
	if ((size_t)dst - (size_t)src < n)
	{
		i = n - 1;
		while (i >= '0' && i < n)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return(dst);
}

int main () 
{
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return(0);
}

