/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/8 01:54:52 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/28 02:00:34 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		
	}
}

int	main(void)
{
	char	s[1000];
	int		c;

	strcpy(s, "asdfggthh");
	c = "t";
	printf("strchr:%c", strchr(s, c));
	printf("ft_strchr:%c", ft_strchr(s, c));
}