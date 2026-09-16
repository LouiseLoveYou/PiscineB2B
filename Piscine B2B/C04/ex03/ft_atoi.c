/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 22:27:38 by username          #+#    #+#             */
/*   Updated: 2026/09/08 11:21:56 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x;
	int	result;
	int	sign;

	x = 0;
	sign = 1;
	result = 0;
	while (str[x] == ' ' || (str[x] <= '\t' && str[x] >= '\r'))
	{
		x++;
	}
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
		{
			sign *= -1;
		}
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + (str[x] - 48);
		x++;
	}
	return (result * sign);
}

int	main(void)
{
	char	str[] = "   ---+--+1234ab567";

	printf("%d", ft_atoi(str));
}
