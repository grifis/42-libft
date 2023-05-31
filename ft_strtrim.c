/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:36:45 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 18:02:47 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	find_trim_bounds(char const *s1, char const *set, size_t *trim_start,
		size_t *trim_end)
{
	*trim_start = 0;
	*trim_end = 0;
	while (s1[*trim_start] != '\0')
	{
		if (ft_strchr(set, s1[*trim_start]) == NULL)
			break ;
		(*trim_start)++;
	}
	while (s1[*trim_start + *trim_end] != '\0')
	{
		if (ft_strchr(set, s1[ft_strlen(s1) - 1 - *trim_end]) == NULL)
			break ;
		(*trim_end)++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	trim_start;
	size_t	trim_end;
	size_t	s1_len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	find_trim_bounds(s1, set, &trim_start, &trim_end);
	s1_len = ft_strlen(s1);
	ptr = malloc(s1_len - trim_start - trim_end + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + trim_start, s1_len - trim_start - trim_end + 1);
	return (ptr);
}

// int	main(void)
// {
// 	char *s1 = "Hello World";
// 	char *set = "d";
// 	char *ptr = ft_strtrim(s1, set);
// 	printf("%s\n", ptr);
// }
