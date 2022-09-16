/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:20:08 by lbatista          #+#    #+#             */
/*   Updated: 2022/09/12 11:58:17 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void errors_append(t_args *args, char **cmd_args, char *path, int code)
{
	if (code == 1)
	{
		ft_putendl_fd("command not found", 2);
		perror("Error");
		ft_split_free(cmd_args);
		ft_split_free(args->path);
		exit(127);
	}
	else if (code == 2)
	{
		perror("Error");
		ft_split_free(cmd_args);
		free(path);
		ft_split_free(args->envp);
	}
	else if (code == 3)
	{
		free(path);
		ft_split_free(cmd_args);
		ft_split_free(args->path);
		perror("error");
		exit(EXIT_FAILURE);
	}
}

void errors(t_args *args, int code)
{
	if (code == 1)
	{
		perror("Error");
		ft_split_free(args->path);
		exit(EXIT_FAILURE);
	}
	if (code == 2)
	{
		ft_putendl_fd("Error: Failed to get command arguments", 2);
		ft_split_free(args->path);
		exit(EXIT_FAILURE);
	}
	if (code == 3)
	{
		ft_split_free(args->path);
		ft_putendl_fd("Not enough arguments.", 2);
		exit(EXIT_FAILURE);
	}
}

void check_arguments(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (ft_strncmp(argv[i], " ", ft_strlen(" ")) == 0)
		{
			ft_putendl_fd("Error:Empty strings are not arguments.", 2);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}
