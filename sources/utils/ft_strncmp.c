/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:00:23 by lbatista          #+#    #+#             */
/*   Updated: 2022/08/30 11:07:54 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*str1 || *str2) && (*str1 == *str2) && n--)
	{
		str1++;
		str2++;
	}
	if (n)
		return ((*(unsigned char *)str1 - *(unsigned char *)str2));
	return (0);
}
