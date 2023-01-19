/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:28:34 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/19 13:28:43 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_nb(char c)
{
	return (48 <= c && c <= 57);
}

int	is_sp(char c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int	pm;
	int	ans;

	pm = 1;
	ans = 0;
	while (is_sp(*str))
		str ++;
	while ((*str == '-' || *str == '+') && !is_nb(*str))
	{
		if (*str == '-')
			pm = pm * -1;
		str ++;
	}
	while (*str != '\0')
	{
		if (is_nb(*str))
			ans = ans * 10 + *str - '0';
		else
			break ;
		str ++;
	}
	return (pm * ans);
}
