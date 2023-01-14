int	ft_isascii(char c)
{
	if (c <= ' ' && c >= '~'){
     return 1;      
	}
  return 0;
}

//it's not ok