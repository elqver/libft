/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:08:25 by skern             #+#    #+#             */
/*   Updated: 2020/11/11 14:06:01 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
}
