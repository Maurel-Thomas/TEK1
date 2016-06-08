/*
** my_getchar.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:08:47 2016
** Last update Thu Mar 17 23:38:31 2016 
*/

#include "tetris.h"

int	my_count_col(char **tabx)
{
  int	n;

  n = -1;
  while (tabx[++n]);
  return (n);
}

int	my_getchar(char c)
{
  int	n;

  n = 0;
  while (c > '0')
    {
      n += 1;
      c -= 1;
    }
  return (n);
}
