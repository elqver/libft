/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:34:50 by skern             #+#    #+#             */
/*   Updated: 2020/11/02 14:26:05 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	size_t	i;

	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	res = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)&(s[i]);
		i++;
	}
	return (res);
}
