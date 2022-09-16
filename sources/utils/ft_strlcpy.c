/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:59:58 by lbatista          #+#    #+#             */
/*   Updated: 2022/08/30 11:07:11 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t leng;
	size_t new_size;

	leng = 0;
	new_size = size - 1;
	if (size)
	{
		while (*src && new_size--)
		{
			*dest = *(unsigned char *)src;
			dest++;
			src++;
			leng++;
		}
		*dest = '\0';
	}
	while (*src)
	{
		leng++;
		src++;
	}
	return (leng);
}
