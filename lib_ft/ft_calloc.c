/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjulya-c <tjulya-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:29:29 by tjulya-c          #+#    #+#             */
/*   Updated: 2026/06/01 16:31:28 by tjulya-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char	*x;
	size_t			max;

	max = -1;
	if (nmemb != 0 && size > max / nmemb)
		return (NULL);
	x = malloc(nmemb * size);
	if (!x)
		return (NULL);
	bzero(x, nmemb * size);
	return (x);
}
