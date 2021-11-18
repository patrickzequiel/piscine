#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *abc;
	int i;
	abc = "Hello";

	i = ft_strlen(abc);
	printf("%d", i);
	return (0);
}
