/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaisfuzita <thaisfuzita@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:36:49 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/06/02 13:31:19 by thaisfuzita      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isinset(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int len;
    char    *string;
    
    if (!s1 || !set)
        return (NULL);
    i = 0;
    while (isinset(s1[i], set))
        i++;
    len = ft_strlen(s1);
    j = len - 1;
    while (isinset(s1[j], set) && j >= i)
        j--;
    len = (j - i) + 1;
    if (len <= 0)
        string = ft_strdup("");
    else
        string = ft_substr(s1, i, len);
    return (string);
}
