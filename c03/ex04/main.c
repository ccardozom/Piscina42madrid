#include <string.h>
#include <stdio.h>

char *ft_strstr();

int main()
{
	char a[] = "hola que tal";
	char b[] = "l";

//	printf("%s",strstr(a,b));
	printf("%s",ft_strstr(a,b));
	printf("\n");
}
