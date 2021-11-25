#include<stdio.h>

char	*ft_strncpy(char *dest, char*src, unsigned int n);

int	main(void)
{
	char src[] = "Hello world !";
	char dest[] = "abcaaaaaaaaaaaaaaa";

	printf("%s \n", src);
   	printf("%s \n", dest);
	ft_strncpy(dest, src, 5);
	printf("%s \n", dest);
	return (0);
}
