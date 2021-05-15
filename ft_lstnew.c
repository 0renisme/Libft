/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 17:24:54 by orfreoua          #+#    #+#             */
/*   Updated: 2021/05/15 17:24:56 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lbft.h"

t_list *ft_lstnew(void *content)
{
    t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(*new))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}