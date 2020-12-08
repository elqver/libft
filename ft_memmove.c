/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:28:13 by skern             #+#    #+#             */
/*   Updated: 2020/11/02 14:39:22 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pd;
	const char	*ps;

	pd = dst;
	ps = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (!len)
		return (dst);
	if (pd <= ps)
		return (ft_memcpy(dst, src, len));
	pd += len;
	ps += len;
	while (len--)
		*--pd = *--ps;
	return (dst);
}
