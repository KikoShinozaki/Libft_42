/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:00:22 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/16 18:08:08 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<strings.h>

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

int	main(void)
{
	char	*str;

	str1[] = "applepen";
	size_t	i;

	i = 2;
	printf("input:(%s)\n", str1);
	printf("times: %zu \n", i);
	bzero(str1, i);
	printf("answer: %c \n", str1[0]);
	printf("answer: %c \n", str1[1]);
	printf("answer: %c \n", str1[2]);
	printf("answer: %c \n", str1[3]);
	printf("answer: %c \n", str1[4]);
	printf("answer: %c \n", str1[5]);
	printf("answer: %c \n", str1[6]);
	printf("answer: %c \n", str1[7]);
}
