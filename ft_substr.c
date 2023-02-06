/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:14:02 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/06 14:34:11 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lens;

	lens = ft_strlen(s);
	if (start >= lens || len == 0)
		return (ft_strdup(""));
	if (len > lens - start)
		len = lens - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

// int	main(void)
// {
// 	char			s[17];
// 	unsigned int	start;
// 	size_t			len;

// 	strcpy(s, "libft-test-tokyo");
// 	start = 20;
// 	len = 100;
// 	printf("ft_substr:%s\n", ft_substr(s, start, len));
// }
