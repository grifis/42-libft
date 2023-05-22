/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:52:55 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/22 16:00:38 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
  int j;

  i = ft_strlen(s) + 1;
  j = 0;
  while (i--)
  {
		if (s[j] == (char)c)
			return ((char *)s + j);
    j++;
	}
	return (NULL);
}
