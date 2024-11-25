/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:25 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:26:27 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"
#include "stdlib.h"

char	*ft_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
