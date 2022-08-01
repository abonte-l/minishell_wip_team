/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_builtins.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:37:35 by abonte-l          #+#    #+#             */
/*   Updated: 2022/08/01 12:42:16 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

/* ************************************************************************** */
/*                           BUILTIN_EXEC FUNCTION                            */
/*                                                                            */
/*  lines 27-44 : Check and dispatch to execute the right built in command    */
/*                                                                            */
/* ************************************************************************** */

void	make_magic_echo(char **built_in, int option)
{
	size_t	size;

	size = ft_tabsize(built_in);
	if (size > 1)
	{
		if (!strcmp(built_in[1], "-n"))
			option = TRUE;
	}
	builtin_echo(option, built_in);
}

void	builtin_exec(char **built_in, t_dlst *list)
{
	int		option;

	option = FALSE;
	if (!ft_strcmp(built_in[0], "pwd"))
		builtin_pwd();
	else if (!ft_strcmp(built_in[0], "cd"))
		builtin_cd(built_in[1]);
	else if (!strcmp(built_in[0], "env"))
		builtin_env(list);
	else if (!ft_strcmp(built_in[0], "exit"))
		builtin_exit(built_in[1]);
	else if (!strcmp(built_in[0], "unset"))
		builtin_unset(built_in, list);
	else if (!strcmp(built_in[0], "export"))
		builtin_export(built_in, list);
	else if (!strcmp(built_in[0], "echo"))
		make_magic_echo(built_in, option);
}