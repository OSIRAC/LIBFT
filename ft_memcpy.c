/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:44:59 by oislamog          #+#    #+#             */
/*   Updated: 2024/10/20 17:44:59 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	if (n == 0 || dest == src)
		return (dest);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
