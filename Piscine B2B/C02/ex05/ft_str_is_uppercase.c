/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:31:09 by username          #+#    #+#             */
/*   Updated: 2026/08/28 19:33:19 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int	ft_str_is_uppercase(char *str)
// {
// 	int	i;

// 	i = 0;
// 	if (str[i] == '\0')
// 	{
// 		return (1);
// 	}
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z')
// 		{
// 		}
// 		else
// 		{
// 			return (0);
// 		}
// 		i++;
// 	}
// 	return (1);
// }

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
			index++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("teste %d", ft_str_is_uppercase("OLIVE"));
// 	return (0);
// }
