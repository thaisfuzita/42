/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:13:48 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/05/27 16:16:59 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count_words(char const *s, char c)
{
    int i;
    int size;
    
    i = 0;
    size = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] != '\0')
            size++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (size);
}

char **free_all(char **list, int x)
{
    while (x >= 0)
    {
        free(list[x]);
        x--;
    }
    free(list);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int x;
    char **list;
    int size;
    
    if (!s)
        return (NULL);
    size = count_words(s, c);
    list = malloc((size + 1) * sizeof(char *));
    if (!list)
        return (NULL);
    i = 0;
    x = 0;
    while (x < size)
    {
        j = 0;
        while (s[i] == c)
            i++;
        while (s[i] && s[i] != c)
        {
            j++;
            i++;
        }
        list[x] = substr(s, i - j, j);
        if (!list[x])
            return (free_all(list, x - 1));
        x++;
    }
    list[x] = NULL;
    return (list);
}

