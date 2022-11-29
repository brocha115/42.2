#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t size;
	char *str;


	if(!s)
		return (0);
	if(start > strlen(s) || start > len)
		return (0);

	size = (len - start);
	str = (char *) malloc(size + 1);
	if (!str)
		return (0);
	strncpy(str, s + start, size);
	return (str);
}	

int main()
{
	char src[] = "substr function Implementation";
	unsigned int m = 7;
	size_t n = 12;
	char* dest = ft_substr(src, m, n);
	printf("%s\n", dest);
	return 0;
}
