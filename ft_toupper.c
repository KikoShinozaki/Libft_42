/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:18:03 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/16 19:13:05 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>

int	ft_toupper(char *str)
{
	if (str[] != 0)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] + 32;
			i++;
		}
	}
}

int	main(void)
{
	char	*str1;

	str1[] = "UnderdoG12";
	printf("input:(%s)\n", str1);
	ft_toupper(str1);
	printf("output:%s\n", str1);
}
