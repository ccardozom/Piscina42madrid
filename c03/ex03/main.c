#include <string.h>
#include <stdio.h>

char *ft_strncat();

int main()
{
	char a[100] = "HOLA";
	char b[100] = "mundo";

	printf("%s",ft_strncat(a,b,3));
//	printf("%s",strncat(a,b,3));
	printf("\n");

}

