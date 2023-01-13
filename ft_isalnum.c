int	ft_isalnum(char c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A' || c <= '0' && c >= '9'){
     return 1;      
	}
  return 0;
}