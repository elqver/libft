/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 13:40:33 by skern             #+#    #+#             */
/*   Updated: 2020/11/07 20:37:57 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(count * size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
		result[i++] = 0;
	return (void *)result;
}
