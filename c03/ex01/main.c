#include <string.h>
#include <stdio.h>

int ft_strncmp();

int main()
{
	char a[] = "\200";
	char b[] = "\0";

	printf("%d",strncmp(a,b,6));
//	printf("%d",ft_strncmp(a,b,6));

	printf("\n%s",b);

}
