#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+') 
	{
		if (str[i] == '-')
		{	
			
			neg = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

int main()
{
	int val;
	char str[] = " +	 -1234567  ";
	
	val = ft_atoi(str);

	printf("%d", val);
	
	return (0);
}


