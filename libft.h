/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:50:38 by mnanke            #+#    #+#             */
/*   Updated: 2023/01/22 18:01:24 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>

int		ft_isalpha(char c);
int		ft_isdigit(char c);
void	*ft_memset(void *str, int x, size_t i);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif