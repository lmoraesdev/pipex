/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:20:25 by lbatista          #+#    #+#             */
/*   Updated: 2022/09/16 19:29:34 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_word;
	size_t	strings_size;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	strings_size = ft_strlen(s1) + ft_strlen(s2);
	new_word = malloc(sizeof(char) * strings_size + 1);
	if (new_word == NULL)
		return (0);
	while (i < strings_size)
	{
		if (i < ft_strlen(s1))
			new_word[i] = s1[i];
		else
			new_word[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	new_word[strings_size] = '\0';
	return (new_word);
}
