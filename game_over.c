/*
** game_over.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Tue Mar 15 19:35:25 2016
** Last update Sun Mar 20 23:41:31 2016 
*/

#include "tetris.h"

int		restart_or_quit(t_struct *st, t_list *list, int x)
{
  x = getch();
  if (x == 'q')
    return (1);
  else if (x == 'r')
    {
      erase();
      key(st);
      st->map = tab_map(st->map);
      time(&st->la);
      timer(st, list);
    }
  return (0);
}

void		display_game_over(int x)
{
  int		nb;

  nb = 0;
  while (nb < 80)
    {
      refresh();
      usleep(20000);
      timeout(1);
      x = getch();
      display_letter_over(nb);
      nb += 1;
    }
}

int		game_over(t_struct *st, t_list *list)
{
  int		col;
  int		x;

  col = 1;
  x = getch();
  while (st->map[1][col] && col <= 10)
    {
      if ((collision(st, list) == 1) && (st->map[1][col] > '0'))
	{
	  erase();
	  display_game_over(x);
	  q_or_r();
	  while (restart_or_quit(st, list, x) != 1)
	    usleep(1);
	  endwin();
	  exit(0);
        }
     col += 1;
    }
  endwin();
  return (0);
}

void		key(t_struct *st)
{
  st->x = 5;
  st->y = 1;
  st->y2 = 1;
  st->score = 0;
  st->level = 1;
  st->min = 0;
  st->us = 150000;
  st->us2 = 850000;
}
