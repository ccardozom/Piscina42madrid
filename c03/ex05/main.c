#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat();

int main()
{
	char a[20] = "fabd";
	char b[20] = "123";

//	printf("%lu",strlcat(b,a,4));
	printf("%u",ft_strlcat(b,a,4));
	printf("\n");
	printf("%s\n",a);
	printf("%s",b);
}
