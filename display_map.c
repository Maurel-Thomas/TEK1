/*
** display_map.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:07:09 2016
** Last update Thu Mar 17 23:38:57 2016 
*/

#include "tetris.h"

void	display_map(char **tabx)
{
  int	lign;
  int	col;
  int	n;

  lign = 0;
  while (tabx[lign] != NULL)
    {
      col = 0;
      while (tabx[lign][col])
	{
	  n = my_getchar(tabx[lign][col]);
	  display_char(n, lign, col);
	  col += 1;
	}
      lign += 1;
    }
}
