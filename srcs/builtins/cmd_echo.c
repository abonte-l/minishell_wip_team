/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_echo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:02:12 by abonte-l          #+#    #+#             */
/*   Updated: 2022/08/24 14:55:19 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	make_magic_option_true(size_t size, char **built_in, int j)
{
	if (size > 2)
	{
		while (built_in[j])
		{
			printf("%s ", built_in[j]);
			++j;
		}
	}
	else
		printf("%c", 7);
}

void	builtin_echo(int option, char **built_in)
{
	int		i;
	int		j;
	size_t	size;

	i = 1;
	j = 2;
	size = ft_tabsize(built_in);
	if (option == TRUE)
	{
		make_magic_option_true(size, built_in, j);
	}
	else
	{
		if (size > 1)
		{
			while (built_in[i])
			{
				printf("%s ", built_in[i]);
				++i;
			}
		}
		printf("\n");
	}
}
