/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:58:50 by skern             #+#    #+#             */
/*   Updated: 2020/11/02 14:44:20 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = dst;
	sp = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*dp++ = *sp++;
	return (dst);
}
