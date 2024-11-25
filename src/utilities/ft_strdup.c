/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:31 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:26:32 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"
#include "stdlib.h"

char	*ft_strdup(char *s)
{
	char	*copy_string;
	int		s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	copy_string = malloc(s_len + 1);
	if (copy_string == NULL)
		return (NULL);
	ft_strlcpy(copy_string, s, s_len + 1);
	return (copy_string);
}
