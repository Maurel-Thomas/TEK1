/*
** deplacement.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:06:57 2016
** Last update Tue Mar 22 23:57:34 2016 
*/

#include "tetris.h"

void		clear_map(t_struct *st)
{
  int		lign;
  int		col;
  int		lign2;
  int		col2;

  lign = st->y2;
  lign2 = 0;
  while (st->piece[lign2] != NULL)
    {
      col = st->x2;
      col2 = 0;
      while (st->piece[lign2][col2])
	{
	  if (st->piece[lign2][col2] > '0')
	    st->map[lign][col] = '0';
	  col += 1;
	  col2 += 1;
	}
      lign += 1;
      lign2 += 1;
    }
}

void	deplacement(t_struct *st)
{
  int	lign;
  int	col;
  int	lign2;
  int	col2;

  lign = st->y;
  lign2 = 0;
  clear_map(st);
  while (st->piece[lign2] != NULL)
    {
      col = st->x;
      col2 = 0;
      while (st->piece[lign2][col2])
	{
	  if (st->piece[lign2][col2] > '0')
	    st->map[lign][col] = st->piece[lign2][col2];
	  col2 += 1;
	  col += 1;
	}
      lign += 1;
      lign2 += 1;
    }
}

void	lign_down(t_struct *st)
{
  int	lign;

  lign = 20;
  while (st->map[lign] && lign >= 1)
    {
      my_strcpy(st->map[lign + 1], st->map[lign]);
      lign -= 1;
    }
}

void	full_lign(t_struct *st)
{
  int	lign;
  int	col;
  int	i;

  i = 0;
  lign = 1;
  col = 1;
  while (st->map[lign] && lign <= 21)
    {
      while (st->map[lign][col] > '0' && lign <= 21 && col <= 10)
	{
	  i += 1;
	  col += 1;
	  if (i == 10)
	    {
	      lign_down(st);
	      st->score += 150;
	    }
	}
      lign += 1;
      col = 1;
      i = 0;
    }
}

char	**rotation(t_struct *st)
{
  char	**piece;
  int	col;
  int	lign;
  int	k;

  lign = 0;
  if ((piece = malloc(sizeof(char *) * (my_strlen(st->piece[0]) + 1))) == NULL)
    return (NULL);
  while (lign < my_strlen(st->piece[0]))
    {
      col = 0;
      k = my_count_col(st->piece) - 1;
      if ((piece[lign] = malloc(my_count_col(st->piece) + 1)) == NULL)
	return (NULL);
      while (col < my_count_col(st->piece))
	{
	  piece[lign][col] = st->piece[k][lign];
	  k -= 1;
	  col += 1;
	}
      piece[lign][col] = '\0';
      lign += 1;
    }
  piece[lign] = NULL;
  return (piece);
}
