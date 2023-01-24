/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 23:53:49 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/25 00:24:14 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	
}

int	main(void)
{
	char	*s1;
	char	*s2;

	strcpy(s1, "abcdefg");
	strcpy(s2, "1234567");
	printf("strncmp %d\n", strncmp(s1, s2, 3));
	printf("ft_strncmp %d\n", ft_strncmp(s1, s2, 3));
	return (0);
}
