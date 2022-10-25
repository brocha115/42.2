#include <stdio.h>

char *ft_strchar(const char *str, int c)
{
	while( *str != '\0' && *str != c)
	{
		str++;
	}
	if(*str == c)
	{
		return((char *)str);
	}
	return (0);
}

int main ()
{
	printf("%s", ft_strchar("jaoao", 'o'));
}
