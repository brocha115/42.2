#include <stdio.h>
#include <string.h>

void *ft_memchr( const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
		{
			return (((void *)(str + i)));
		}
		i++;
	}
	return (0);
}

int main ()
{
	 const char str[] = "http://www.tutorialspoint.com";
	 const char ch = '.';
         char *ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
