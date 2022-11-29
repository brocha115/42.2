#include "libft.h"
char	*ft_strdup(const char *s)
{
	char *s1;
	
	s1 = (char *)malloc(ft_strlen(s) + 1)
	if (!s1)
		return (0);
	return (ft_memcpy(s1, s, (ft_strlen(s) + 1)));
}
