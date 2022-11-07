#include <stdio.h>
char ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	if(to_find[j] == 0)
		return((char *)str);
	while(str[i] != '\n')
	{
		while(str[i + j] == to_find[j] && len > (i + j))
		{
			j++;
		}
		if(to_find[j] == '\0')
			return((char *)str + i);
		i++;
		j = 0;
	}
	return(0)
}
