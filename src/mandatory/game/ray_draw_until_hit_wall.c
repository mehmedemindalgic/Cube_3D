/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_draw_until_hit_wall.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:28:15 by medalgic          #+#    #+#             */
/*   Updated: 2024/03/21 13:53:05 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

//are you on, for ex N, or W
//This is just about perspective, ray can hit to 
//N,S or E,W this describes x and y

void	ray_draw_until_hit_wall(t_ray *ray, t_map *map)
{
	while (ray->hit_wall == 0)
	{
		if (ray->side_dist.x < ray->side_dist.y)
		{
			ray->side_dist.x += ray->next_hit_dist.x;
			ray->map_position.x += ray->map_step.x;
			ray->hit_wall_side = 'x';
		}
		else
		{
			ray->side_dist.y += ray->next_hit_dist.y;
			ray->map_position.y += ray->map_step.y;
			ray->hit_wall_side = 'y';
		}
		if (map->text[ray->map_position.y] == NULL)
			break ;
		if (map->text[ray->map_position.y][ray->map_position.x] == '1')
			ray->hit_wall = 1;
	}
}
		//**about
		//hit_wall_side** Just this will give to which direction-