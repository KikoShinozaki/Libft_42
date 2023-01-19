/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 01:26:22 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/20 02:04:11 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'S';
// 	printf("input:%c\n", c);
// 	printf("answer:%c\n", tolower(c));
// 	printf("output:%c\n", ft_tolower(c));
// 	c = 's';
// 	printf("input:%c\n", c);
// 	printf("answer:%c\n", tolower(c));
// 	printf("output:%c\n", ft_tolower(c));
// 	c = '1';
// 	printf("input:%c\n", c);
// 	printf("answer:%c\n", tolower(c));
// 	printf("output:%c\n", ft_tolower(c));
// }
