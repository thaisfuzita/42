/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:34:19 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/06/01 15:38:32 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = n;
	if (src < dest)
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		memcpy(dest, src, n);
	return (dest);
}
