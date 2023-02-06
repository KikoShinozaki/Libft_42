/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:08:10 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/06 17:05:50 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	size_check(int num)
{
	size_t		i;
	long long	numbox;

	i = 1;
	numbox = num;
	if (numbox < 0)
	{
		i++;
		numbox *= -1;
	}
	while (numbox >= 10)
	{
		numbox /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str;
	long long	num;

	num = n;
	len = size_check(num);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len + 1] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	int	n;

// 	n = 0;
// 	printf("size_check:%zu\n", size_check(n));
// 	printf("ft_itoa:%s\n", ft_itoa(n));
// }
