/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:47:04 by skern             #+#    #+#             */
/*   Updated: 2020/11/11 13:12:09 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	in(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t left;
	size_t right;
	size_t ls1;

	if (s1 == NULL || set == NULL)
		return (NULL);
	ls1 = ft_strlen(s1);
	left = 0;
	while (in(s1[left], set) && left <= ls1)
		left++;
	right = ls1 - 1;
	while (in(s1[right], set) && right > left)
		right--;
	return (ft_substr(s1, left, right - left + 1));
}
