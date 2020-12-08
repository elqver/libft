/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:33:37 by skern             #+#    #+#             */
/*   Updated: 2020/11/11 13:04:55 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	ls1;
	size_t	ls2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	join = (char *)ft_calloc(ls1 + ls2 + 1, sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, ls1 + 1);
	ft_strlcpy(join + ls1, s2, ls2 + 1);
	return (join);
}
