/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:29:30 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:29:32 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"
#include "../../utilities/utilities.h"

void	verify_argument(t_cub3d *cub3d)
{
	char	*filename;

	filename = cub3d->config->filename;
	if (cub3d->config->argument_count == 1)
		print_error(cub3d, "Map name not entered. \
		You must enter the map name!");
	if (cub3d->config->argument_count > 2)
		print_error(cub3d,
			"Only the map name should be entered as an argument.");
	if (filename == NULL || *filename == '\0')
		print_error(cub3d, "Map name cannot be null or empty.");
	if (ft_strcmp(filename + ft_strlen(filename) - 4, ".cub") != 0)
		print_error(cub3d, "Map name does not end with the .cub extension.");
}
