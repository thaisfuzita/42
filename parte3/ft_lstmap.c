/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:35:55 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/06/01 15:00:47 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new;
    void *temp;
    
    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    while (lst != NULL)
    {
        temp = f(lst->content);
        new = ft_lstnew(temp);
        if (new == NULL)
        {
            del(temp);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new);
        lst = lst->next;
    }
    return (new_list);
}