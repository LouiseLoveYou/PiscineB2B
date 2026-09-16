/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 16:26:47 by username          #+#    #+#             */
/*   Updated: 2026/08/30 15:14:06 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char			*s1;
// 	char			*s2;
// 	unsigned int	i;

// 	s1 = "abc";
// 	s2 = "ab";
// 	i = 10;
// 	printf("%d \n", ft_strncmp(s1, s2, i));
// 	printf("%d", strncmp(s1, s2, i));
// 	return (0);
// }
