/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:15:33 by lbatista          #+#    #+#             */
/*   Updated: 2022/09/16 19:56:25 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

// write - read - close - access - execve
# include <unistd.h>

// wait - waitpid
# include <sys/wait.h>

// open
# include <fcntl.h>

// perror
# include <stdio.h>

// malloc - free
# include <stdlib.h>

void	ft_putendl_fd(char *s, int fd);
void	ft_split_free(char **args);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strcmp(char *str, char *str2);

#endif
