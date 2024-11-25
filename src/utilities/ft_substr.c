/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:48 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:26:49 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"
#include "stdlib.h"

char	*ft_substr(char *s, int start, int len)
{
	char	*string;
	int		size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) - 1 < start)
		return (ft_strdup(""));
	s = s + start;
	size = ft_strlen(s);
	if (size < len)
		len = size;
	string = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(string, s, len + 1);
	return (string);
}
