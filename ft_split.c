/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:27:53 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/25 17:28:02 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char **result;
	size_t i;
    size_t j;
	size_t word_count;
    size_t len;

    word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (result == NULL)
        return (NULL);
    i = 0;
    while (word_count--)
    {
        
    }
}