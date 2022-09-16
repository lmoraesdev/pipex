/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:45:44 by lbatista          #+#    #+#             */
/*   Updated: 2022/08/30 11:08:10 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substring;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (0);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
