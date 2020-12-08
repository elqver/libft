/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:21:55 by skern             #+#    #+#             */
/*   Updated: 2020/11/02 14:42:49 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	if ((char)c == '\0')
		return (res + ft_strlen(res));
	while (*res != (char)c && *res != '\0')
		res++;
	if (*res == '\0')
		return (NULL);
	return (res);
}
