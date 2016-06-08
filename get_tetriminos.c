/*
** get_tetriminos.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:07:29 2016
** Last update Wed Mar 23 00:05:09 2016 
*/

#include "tetris.h"

char		**get_tetriminos(t_list	*list)
{
  int		n;
  t_list	*tmp;

  tmp = list->next;
  n = (rand() % 7) + 1;
  while (n > 0)
    {
      tmp = tmp->next;
      n = n - 1;
    }
  if (tmp == list)
    tmp = list->next;
  return (tmp->obj);
}
