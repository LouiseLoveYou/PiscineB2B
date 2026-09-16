/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:10:28 by username          #+#    #+#             */
/*   Updated: 2026/08/29 16:24:10 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 67;
// 	b = 69;
// 	printf("before swap %d %d \n", a, b);
// 	ft_swap(&a, &b);
// 	printf("after swap %d %d \n", a, b);
// 	return (0);
// }
