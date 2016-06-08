/*
** check_pieces.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:05:46 2016
** Last update Sun Mar 20 23:44:11 2016 
*/

#include "./tetris.h"

int	check_x_y_pieces(char **tabx, int x, int y)
{
  int	nb_x;
  int	nb_y;
  int	l;

  l = 1;
  nb_y = 0;
  nb_x = 0;
  while (tabx[l])
    {
      if (my_strlen(tabx[l]) > nb_x)
	nb_x = my_strlen(tabx[l]);
      l += 1;
    }
  nb_y += (l - 1);
  if (nb_y != y)
    return (1);
  if (nb_x != x)
     return (1);
  return (0);
}

int	check_lign_pieces(char *str, int l)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str[i])
    {
      if (l == 0)
	{
	  if (str[i] >= '1' && str[i] <= '9')
	    c += 1;
	  if ((str[i] < 48 || str[i] > 57) && str[i] != ' ')
	    return (1);
	}
      else
	{
	  c = 3;
	  if (str[i] != '*' && str[i] != ' ')
	    return (1);
	}
      i += 1;
    }
  if (c == 3)
    return (0);
  return (1);
}

char	**check_pieces(char **tabx)
{
  int	l;

  l = 0;
  while (tabx[l])
    {
      if ((check_lign_pieces(tabx[l], l)) == 1)
	return (NULL);
      l += 1;
    }
  if ((check_x_y_pieces
       (tabx, my_getchar(tabx[0][0]), my_getchar(tabx[0][2]))) == 1)
    return (NULL);
  return (tabx);
}
