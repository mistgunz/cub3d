

#include "../include/cub3d.h"

void	ft_free_tex(char **rgb)
{
	int	i;

	i = 0;
	while (rgb[i])
	{
		free (rgb[i]);
		i++;
	}
	free (rgb);
}

void	ft_found_tex_error(t_game *data, char **rgb)
{
	ft_free_tex(rgb);
	ft_giga_error("Error\n", data);
}

void	ft_check_tex(t_game *data)
{
	int		i;
	int		j;
	char	**rgb;

	i = 0;
	j = 0;
	while (j < 6)
	{
		if (j > 3)
		{
			rgb = ft_split(data->instr[j], ',');
			while (rgb[i])
			{
				if (ft_atoi(rgb[i]) > 255 || ft_atoi(rgb[i]) < 0 || i > 2)
					ft_found_tex_error(data, rgb);
				i++;
			}
			ft_free_tex(rgb);
		}
		i = 0;
		j++;
	}
}
