#include <stdio.h>
 
int ft_atoi();
 
int main()
{
  char a[] = "---12";
  int n;
 
  printf("String  = %s\nInteger = %i\n", a, ft_atoi(a));
 
  return 0;
}
