/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:00:22 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/15 19:40:01 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<strings.h>

void	*ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

int	main(void)
{
	char str1[] = "applepen";
	size_t	i;

	i = 2;
	printf("input:(%s)\n", str1);
	printf("times: %zu \n", i);
	bzero(str1, i);
	printf("answer: %s \n", str1[]);
}