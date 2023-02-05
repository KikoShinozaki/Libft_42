/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:52:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/06 03:13:33 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	sep_times(char const *s, char c)
{
	size_t	i;
	size_t	sept;

	i = 0;
	sept = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			sept++;
		i++;
	}
	return (sept);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	printf("j:%zu\n -----\n", j);
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**str;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (sep_times(s, c) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		len = word_len(&s[i], c);
		str[j++] = ft_substr(&s[i], 0, len);
		i += len;
		i++;
	}
	str[j] = 0;
	return (str);
}

int	main(void)
{
	char	s[28];
	char	c;
	char	**tmp;
	size_t	i;

	strcpy(s, "0123,567,,01,,,56789,,,0");
	c = ',';
	i = 0;
	tmp = ft_split(s, c);
	while (tmp[i])
	{
		if (tmp[i] == NULL)
			break ;
		printf("ft_split[%zu]:%s\n", i, tmp[i]);
		i++;
	}
	printf("s:%s\n", s);
	return (0);
}
