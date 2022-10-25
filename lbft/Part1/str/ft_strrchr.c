#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	const char *ini;
	
	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	  
	while(*s != *ini && *s != c)
	{
	 	s--;
	}
  	if(c == *s)
	{
		return((char *) s);
	}
	return(0);
}
	
int main()
{
	printf("%s", ft_strrchr("joaoaoa", 'o'));   
	return 0;
}	
