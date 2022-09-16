/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:15:06 by lbatista          #+#    #+#             */
/*   Updated: 2022/08/29 17:15:08 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHARED_H
#define SHARED_H

#include "utils.h"

typedef struct s_args
{
	int argc;
	char **argv;
	char **envp;
	char **path;
} t_args;

void errors(t_args *args, int code);
void errors_append(t_args *args, char **cmd_args, char *path, int code);
char *find_command_path(char **path, char *cmd);
char **get_path(char **envp);
void check_arguments(char **argv);

#endif
