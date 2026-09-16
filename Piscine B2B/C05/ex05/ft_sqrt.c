/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sqrt.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/08 12:27:05 by username         #+#    #+#              */
/*   Updated: 2026/09/08 12:29:10 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= 46340 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(16));
// }
