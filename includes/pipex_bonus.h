/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:14:29 by lbatista          #+#    #+#             */
/*   Updated: 2022/09/16 19:57:00 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include "shared.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		main(int argc, char **argv, char **envp);
char	*get_next_line(int fd);
void	pipex_bonus(t_args *args, int index, int outfile);
#endif
