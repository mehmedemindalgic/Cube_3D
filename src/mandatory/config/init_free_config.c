/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_free_config.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:29:03 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:29:04 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"
#include "../../utilities/utilities.h"

void	init_config(t_cub3d *cub3d, int argument_count, char *filename)
{
	cub3d->config = malloc(sizeof(t_config));
	if (cub3d->config == NULL)
		print_error(cub3d, "config malloc error.");
	cub3d->config->argument_count = argument_count;
	cub3d->config->filename = filename;
	cub3d->config->text = NULL;
	cub3d->config->total_line_count = 0;
	cub3d->config->full_line_count = 0;
	cub3d->config->empty_line_count = 0;
	cub3d->config->xpm_files = NULL;
	cub3d->config->floor_color = NULL;
	cub3d->config->ceiling_color = NULL;
	cub3d->config->map = NULL;
}

void	free_config(t_cub3d *cub3d)
{
	if (cub3d->config == NULL)
		return ;
	free_map(cub3d);
	free_colors(cub3d);
	free_xpm_files(cub3d);
	free_double_pointer(cub3d->config->text);
	free(cub3d->config);
}
