/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:33 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:26:34 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int	ft_strlcpy(char *dest, char *src, int n)
{
	int	src_length;

	src_length = ft_strlen(src);
	while (*src != '\0' && 1 < n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n != 0)
		*dest = '\0';
	return (src_length);
}
