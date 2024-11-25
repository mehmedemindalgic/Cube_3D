/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rgb_colors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:28:00 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/20 01:28:01 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	init_ceiling_rgb(t_cub3d *cub3d)
{
	int	red;
	int	green;
	int	blue;

	red = cub3d->config->ceiling_color->red;
	green = cub3d->config->ceiling_color->green;
	blue = cub3d->config->ceiling_color->blue;
	cub3d->game->ceiling_rgb = (red << 16 | green << 8 | blue);
}

void	init_floor_rgb(t_cub3d *cub3d)
{
	int	red;
	int	green;
	int	blue;

	red = cub3d->config->floor_color->red;
	green = cub3d->config->floor_color->green;
	blue = cub3d->config->floor_color->blue;
	cub3d->game->floor_rgb = (red << 16 | green << 8 | blue);
}
