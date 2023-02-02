/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:14:02 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/31 14:28:37 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;

	lens = ft_strlen(s);
	if (start >= lens && len == 0)
		return (ft_strdup(""));
	if (len > lens - start)
		len = lens - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, &s[start], lens + 1);
	return (str);
}

// int	main(void)
// {
// 	char			s[1000];
// 	unsigned int	start;
// 	size_t			len;

// 	strcpy(s, "\0");
// 	start = 2;
// 	len = 5;
// 	printf("%s\n", ft_substr(s, start, len));
// }
