#include<stdio.h>

char	*ft_strcpy(char *dest, char*src);

int	main(void)
{
	char src[] = "Hello world !";
	char dest[] = "abcaaaaaaaaaaaaaaa";

	printf("%s \n", src);
   	printf("%s \n", dest);
	ft_strcpy(dest, src);
	printf("%s \n", dest);
	return (0);
}
