/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:22:06 by username          #+#    #+#             */
/*   Updated: 2026/08/27 14:48:46 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 19;
// 	b = 3;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n", div);
// 	printf("%d\n", mod);
// }
