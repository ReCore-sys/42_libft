/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshore <kshore@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 01:39:15 by kshore            #+#    #+#             */
/*   Updated: 2023/08/12 01:46:53 by kshore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	comment("Set i to 0");
	i = 0;
	comment("Set temp to lst");
	temp = lst;
	comment("While temp is not NULL, increment i and set temp to temp's next");
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	comment("Return i");
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	comment("While lst is not NULL, set lst to lst's next");
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	comment("Return lst");
	return (lst);
}
