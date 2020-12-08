/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:07:37 by skern             #+#    #+#             */
/*   Updated: 2020/11/07 20:37:11 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_haystack;
	size_t	len_needle;

	if (*needle == '\0')
		return (char *)haystack;
	i = 0;
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	while (i <= len_haystack - len_needle && i + len_needle <= len)
	{
		if (ft_strncmp((haystack + i), needle, len_needle) == 0)
			return (char *)(haystack + i);
		i++;
	}
	return (NULL);
}
