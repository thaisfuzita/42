/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsradd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 13:42:24 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/06/01 13:55:26 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;

    new->next = *lst;
    *lst = new;
}