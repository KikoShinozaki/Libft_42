/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 03:06:16 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/22 01:27:06 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (len--)
		{
			*d = *s;
			*d++;
			*s++;
		}
	}
	else
	{
		d += len;
		s -= len;
		while (len--)
		{
			*d = *s;
			*d--;
			*s--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[1000];
// 	char	src[1000];
// 	char	dest1[1000];
// 	char	src1[1000];

// 	printf("-------------------------\n");
// 	strcpy(dest, "123456789");
// 	strcpy(src, "pineapple");
// 	strcpy(dest1, "123456789");
// 	strcpy(src1, "pineapple");
// 	printf("dest1:%s\n", dest);
// 	memmove(dest, src, 3);
// 	printf("memmove:%s\n", dest);
// 	printf("-------------------------\n");
// 	printf("dest2:%s\n", dest1);
// 	ft_memmove(dest1, src1, 3);
// 	printf("my_memmove:%s\n", dest1);

// 	return (0);
// }
