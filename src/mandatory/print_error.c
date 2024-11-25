/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:27:31 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:27:33 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <stdio.h>

void	print_error(t_cub3d *cub3d, char *message)
{
	printf("Error!\n%s\n", message);
	free_cub3d(cub3d);
	exit(EXIT_FAILURE);
}
