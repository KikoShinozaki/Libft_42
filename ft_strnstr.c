/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 22:57:16 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/26 02:34:52 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	m;

	n = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (n < len && haystack[n] != '\0')
	{
		m = 0;
		while (n + m < len && haystack[n + m] == needle[m] && needle[n] != '\0'
			&& haystack[n + m])
			m++;
		if (!needle[m])
			return ((char *)(haystack + n));
		n++;
	}
	return (NULL);
}

int	main(void)
{
	
}
