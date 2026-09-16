/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kisella <kisella@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 10:30:37 by username          #+#    #+#             */
/*   Updated: 2026/09/09 11:06:04 by kisella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '`\0')
	{
		i++;
	}
	dest = malloc(sizeof * (char) * (i + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (j < n)
	{
		dest[j] == src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
