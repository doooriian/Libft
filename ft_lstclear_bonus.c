/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dley <dley@student.42.fr >                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:00:11 by dley              #+#    #+#             */
/*   Updated: 2023/05/13 02:13:30 by dley             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*supp;
	t_list	*tmp;

	supp = *lst;
	if (!lst || !del)
		return ;
	while (supp != NULL)
	{
		tmp = supp->next;
		ft_lstdelone(supp, del);
		supp = tmp;
	}
	*lst = NULL;
}
