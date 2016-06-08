/*
** collision.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 19:18:13 2016
** Last update Tue Mar 15 18:52:02 2016 
*/

#include "tetris.h"

int		cnt(char **piece, int col)
{
  int		lign;
  int		n;

  n = 1;
  lign = my_count_col(piece) - 1;
  while (lign > 0)
    {
      if (piece[lign][col] > '0')
	return (n);
      n += 1;
      lign -= 1;
    }
  return (n);
}

int		return_collision(t_struct *st, t_list *list, t_collision *ini)
{
  if (st->map[ini->lign - 1][ini->col] > '0')
    {
      st->piece = get_tetriminos(list);
      st->y = 1;
      st->y2 = 1;
      st->x = 5;
      return (1);
    }
}

int		else_return_collision(t_struct *st, t_list *list, t_collision *ini)
{
  if (st->map[ini->lign - cnt(st->piece, ini->col2)][ini->col] > '0')
    {
      st->piece = get_tetriminos(list);
      st->y = 1;
      st->y2 = 1;
      st->x = 5;
      return (1);
    }
}

int		count_collision(t_struct *st, t_collision *ini)
{
  while (st->piece[ini->lign2])
    {
      ini->lign += 1;
      ini->lign2 += 1;
    }
}

int		collision(t_struct *st, t_list *list)
{
  t_collision   ini;

  ini.lign = st->y;
  ini.lign2 = 0;
  ini.col2 = 0;
  ini.col = st->x;
  while (st->piece[ini.lign2][ini.col2])
    {
      count_collision(st, &ini);
      if (st->piece[ini.lign2 - 1][ini.col2] > '0')
	{
	  if (return_collision(st, list, &ini) == 1)
	    return (1);
        }
      else
	{
	  if (else_return_collision(st, list, &ini) == 1)
	    return (1);
	}
      ini.lign = st->y;
      ini.col2 += 1;
      ini.col += 1;
      ini.lign2 = 0;
    }
  return (0);
}
