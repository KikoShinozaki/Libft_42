int ft_memset(char *str, int x , int i){
	int j;
	j = 0;
	//can change the str's changing start address but how?
	while (j <= i){
		str[j] = x;
		j++;
	}
}

int main(void)
{
	char str1[128] = "applepen";
	int x = 'A';
	int i = 3;
	printf("input:(%s)\n", str1);
	printf("times: %d \n", i);
	printf("times: %d \n", x);
	printf("answer: %d \n",ft_memset(str1));
}
//完全忘記了 算了