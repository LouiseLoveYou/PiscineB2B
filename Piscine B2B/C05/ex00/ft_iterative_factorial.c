/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_iterative_factorial.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 13:56:20 by username          #+#    #+#             */
/*   Updated: 2026/09/08 11:40:38 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	facto;

	result = 1;
	facto = 1;
	if (nb < 0 || nb > 14)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (facto <= nb)
	{
		result *= facto;
		facto++;
	}
	return (result);
}

// int	main(void)
// {
// 	int	nb;
// 	int	nb1;

// 	nb = 4;
// 	nb1 = ft_iterative_factorial(nb);
// 	printf("%d", nb1);
// }
