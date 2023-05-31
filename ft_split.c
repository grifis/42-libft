/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:27:53 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 21:36:35 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>

bool	free_check(char **result, size_t i)
{
	if (result[i] == NULL)
	{
		while (i--)
			free(result[i]);
		free(result);
		return (true);
	}
	return (false);
}

size_t	count_words(char const *s, char c)
{
	size_t	word_count;
	int		in_word;

	word_count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		if (*s == c)
			in_word = 0;
		s++;
	}
	return (word_count);
}

char	*create_word(char const *s, char c)
{
	char	*word;
	size_t	word_len;

	word_len = 0;
	while (s[word_len] != c && s[word_len] != '\0')
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	ft_memmove(word, s, word_len);
	word[word_len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_count;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (word_count--)
	{
		while (*s == c && *s != '\0')
			s++;
		result[i] = create_word(s, c);
		if (free_check(result, i))
			return (NULL);
		s += ft_strlen(result[i]);
		i++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**result;

// 	result = ft_split(NULL, 'd');
// 	printf("%s\n", result[0]);
// }

// int main() {
//     // Case 1: Passing NULL should not crash.
//     assert(ft_split(NULL, 'a') == NULL);

//     // Case 2: When memory allocation fails.
//     // This is difficult to test without mocking the malloc function
//     // to intentionally fail, as it depends on the system's memory state.

//     // Case 3: No splitting character in the string.
//     char **result = ft_split("abc", 'd');
//     assert(result != NULL);
//     assert(strcmp(result[0], "abc") == 0);
//     assert(result[1] == NULL);

//     // Remember to free the memory allocated by ft_split.
//     for (int i = 0; result[i] != NULL; i++) {
//         free(result[i]);
//     }
//     free(result);

//     return (0);
// }