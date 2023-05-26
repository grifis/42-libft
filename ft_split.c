/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:27:53 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/26 14:20:13 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	freeAll(char **result, size_t i)
{
	while (i--)
		free(result[i]);
	free(result);
}

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (!flag && s[i] != c)
		{
			flag = 1;
			count++;
		}
		else if (flag && s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_count;
	size_t	len;

	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (word_count--)
	{
		while (*s == c && *s != '\0')
			s++;
		len = 0;
		while (s[len] != c && s[len] != '\0')
			len++;
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (result[i] == NULL)
		{
			freeAll(result, i);
			return (NULL);
		}
		ft_memmove(result[i], s, len);
		result[i][len] = '\0';
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char **result = ft_split("\0", '\0');
// 	printf("%s\n", result[0]);
// }