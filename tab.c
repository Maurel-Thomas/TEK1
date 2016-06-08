/*
** tab.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:10:57 2016
** Last update Tue Mar 15 18:58:32 2016 
*/

#include "tetris.h"

char	**tab_map(char **map)
{
  int	col;
  int	lign;

  lign = 0;
  if ((map = malloc(sizeof(char *) * 23)) == NULL)
    return (NULL);
  while (lign < 12)
    {
      if ((map[lign] = malloc(sizeof(char) * 23)) == NULL)
	return (NULL);
      lign += 1;
    }
  lign = 0;
  map[lign] = my_strdup("777777777777");
  lign += 1;
  while (lign < 22)
    {
      map[lign] = my_strdup("700000000007");
      lign += 1;
    }
  map[lign] = my_strdup("777777777777");
  map[lign + 1] = NULL;
  return (map);
}
