/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:27:53 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/28 18:36:55 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	free_all(char **result, size_t i)
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

char	*create_word(char const *s, char c, size_t *len)
{
	char	*word;

	*len = 0;
	while (s[*len] != c && s[*len] != '\0')
		(*len)++;
	word = (char *)malloc(sizeof(char) * (*len + 1));
	if (word == NULL)
		return (NULL);
	ft_memmove(word, s, *len);
	word[*len] = '\0';
	return (word);
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
		result[i] = create_word(s, c, &len);
		if (result[i] == NULL)
		{
			free_all(result, i);
			return (NULL);
		}
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
