/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:52:33 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/04 19:26:58 by mnanke           ###   ########.fr       */
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
		if (s[i] == c)
		{
			if (s[i + 1] == c)
				i++;
			sept++;
		}
		i++;
	}
	printf("iii:%zu\n", i);
	printf("sept:%zu\n", sept);
	return (sept);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
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
	printf("sep_times:%zu\n", sep_times(s, c));
	str = malloc(sizeof(char *) * (sep_times(s, c) + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			len = word_len(&s[i], c);
			str[j++] = ft_substr(&s[i], 0, len);
			i += len;
			printf("s:%s\n", s);
			printf("len:%zu\n", len);
			printf("--------\n");
		}
		i++;
		printf("i:%zu\n", i);
	}
	str[j] = 0;
	return (str);
}

int	main(void)
{
	char	s[25];
	char	c;
	char	**tmp;
	size_t	i;

	strcpy(s, "42343,");
	c = ',';
	i = 0;
	tmp = ft_split(s, c);
	while (tmp[i])
	{
		if (tmp[i] == NULL)
			break ;
		printf("ft_split[%zu]:%s", i, tmp[i]);
		i++;
	}
	// printf("sep_times:%zu\n", sep_times(s, c));
	// printf("word_len:%zu\n", word_len(s, c));
	return (0);
}
