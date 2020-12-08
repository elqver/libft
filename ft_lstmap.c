/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skern <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:24:37 by skern             #+#    #+#             */
/*   Updated: 2020/11/11 14:15:05 by skern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (res == NULL)
		return (NULL);
	current = res;
	lst = lst->next;
	while (lst != NULL)
	{
		current->next = ft_lstnew(f(lst->content));
		current = current->next;
		if (current == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (res);
}
