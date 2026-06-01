/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:36:49 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/06/01 16:59:50 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isinset(char const *s, char a)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		x;
	int		size;
	char	*string;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && isinset(set, s1[i]) == 1)
		i++;
	if (s1[i] == '\0')
		size = 1;
	else
	{
		j = strlen(s1) - 1;
		while (s1[j] && isinset(set, s1[j]) == 1)
			j--;
		size = j - i + 2;
	}
	string = malloc((size) * sizeof(char));
	if (!string)
		return (NULL);
	x = 0;
	while (x < size - 1)
	{
		string[x] = s1[i + x];
		x++;
	}
	string[x] = '\0';
	return (string);
}
