/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oislamog <oislamog@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:42:21 by oislamog          #+#    #+#             */
/*   Updated: 2024/10/29 17:15:28 by oislamog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(const char *str, char separator)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == separator))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !(str[i] == separator))
			i++;
	}
	return (count);
}

static int	ft_strlen_sep(const char *str, char separator)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == separator))
		i++;
	return (i);
}

static char	*ft_word(const char *str, char separator)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, separator);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_clean(char **a, int i)
{
	if (!a[i])
	{
		while (i > 0)
			free(a[--i]);
		free(a);
		return (1);
	}
	return (0);
}

char	**ft_split(const char *str, char separator)
{
	char	**srg;
	int		i;

	i = 0;
	srg = (char **)malloc(sizeof(char *) * (count_strings(str, separator) + 1));
	if (!srg)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && (*str == separator))
			str++;
		if (*str != '\0')
		{
			srg[i] = ft_word(str, separator);
			if (ft_clean(srg, i))
				return (NULL);
			i++;
		}
		while (*str && !(*str == separator))
			str++;
	}
	srg[i] = 0;
	return (srg);
}
