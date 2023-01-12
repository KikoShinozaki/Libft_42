unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	n;

	n = size - 1;
	i = 0;
	while (i <= n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	dest[i - 1] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
