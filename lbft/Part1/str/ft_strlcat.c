#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d;

	if(size <= strlen(dst))
		return(strlen(dst) + strlen(src));
	d = strlen(dst);
	i = 0;
	while(src[i] != '\0' && d + 1 < size)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (strlen(dst) + strlen(&src[i]));
}
