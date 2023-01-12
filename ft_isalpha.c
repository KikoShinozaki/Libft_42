#include <stdio.h>

int	ft_isalpha(char c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A'){
     return 1;      
	}
  return 0;
}

int main(void)
{
	char c;
    printf("-----------------------------------\n");
	c = '5';
	if(ft_isalpha(c)) {
	printf("result %c \n", c);
	}
	else{
		printf("他媽的%c\n", c);
	}
}