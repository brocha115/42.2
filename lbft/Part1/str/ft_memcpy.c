#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;

	if (!dst && !src)
	{
		return(0);
	}
	i = 0;
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return(dst);
}


int main()
{
	char str1[] = "Geeks"; 
	char str2[] = "Quiz"; 
	    
	puts("str1 before memcpy ");
	puts(str1);
		 
	ft_memcpy(str1, str2, 7);
		   
	puts("\nstr1 after memcpy ");
	puts(str1);
		       
	return 0;
}
