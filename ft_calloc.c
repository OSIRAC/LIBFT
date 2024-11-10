/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:43:19 by oislamog          #+#    #+#             */
/*   Updated: 2024/10/26 20:53:58 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	total = count * size;
	p = malloc (total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
