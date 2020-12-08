/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:54:45 by skern             #+#    #+#             */
/*   Updated: 2020/11/02 14:19:02 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	j;

	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	j = 0;
	while (dst_len + j < dstsize - 1 && src[j] != '\0')
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + ft_strlen(src));
}
