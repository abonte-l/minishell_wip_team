/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:52:05 by abonte-l          #+#    #+#             */
/*   Updated: 2022/06/23 12:52:06 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * (n + 1));
	if (!copy)
		return (0);
	while (n)
	{
		copy[i] = s1[i];
		n--;
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
