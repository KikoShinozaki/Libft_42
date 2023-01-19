/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 03:00:05 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/20 03:05:53 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//まだmemsetのコピー
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			j;
	unsigned char	*tmp;

	tmp = dest;
	j = 0;
	while (j < n)
	{
		*tmp = (unsigned char)src;
		tmp++;
		j++;
	}
	return (dest);
}

int	main(void)
{
	char 	str1[] = "applepen";
	int		x;
	size_t	i;

	i = 2;
	x = 'B';
	printf("input:(%s)\n", str1);
	printf("times: %zu \n", i);
	printf("input: %d \n", x);
	ft_memset(str1, x, i);
	printf("answer: %s \n", str1);
}
