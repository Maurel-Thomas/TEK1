/*
** mouse.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:10:47 2016
** Last update Tue Mar 22 16:09:48 2016 
*/

#include "tetris.h"

void		tetris_loading(int nb)
{
  tetris_tab();
  if (nb == 10)
    letter_T1();
  else if (nb == 25)
    letter_E();
  else if (nb == 40)
    letter_T2();
  else if (nb == 55)
    letter_R();
  else if (nb == 70)
    letter_I();
  else if (nb == 85)
    letter_S();
  else if (nb == 100)
    {
      WHITE7;
      attron(COLOR_PAIR(77));
      mvprintw(50, 40, "Loading is completed");
   }
}

void            loading(t_struct *st)
{
  int           x;
  int           y;
  int		nb;
  int		ch;

  y = 23;
  x = 17;
  nb = 7;
  mvprintw(20, 40, "Loading tetriminos...");
  while (x <= 88 && nb <= 100)
    {
      GREEN2;
      attron(COLOR_PAIR(22));
      mvprintw(20, 62, "%d", nb);
      mvprintw(20, 66, "%c", '%');
      GREEN;
      attron(COLOR_PAIR(2));
      usleep(55000);
      timeout(1);
      ch = getch();
      mvprintw(y, x, "*");
      tetris_loading(nb);
      x += 2;
      nb += 3;
    }
}

void	init_mouse()
{
  if (!mousemask(ALL_MOUSE_EVENTS, NULL)
      || has_mouse() != TRUE)
    {
      endwin();
      exit(1);
    }
}

int             get_pos_mouse(int *x, int *y, int *key)
{
  MEVENT        event;
  int           i;

  i = getmouse(&event);
  if (i == OK)
    {
      *x = event.x;
      *y = event.y;
      *key = event.bstate;
    }
  if (*x <= 95 && *x >= 88 && *y <= 51 && *y >= 49)
    return (i);
}

int	check_click(t_struct *st)
{
  int	x;
  int	y;
  int	key;
  int	ch;

  init_mouse();
  scrollok(stdscr, TRUE);
  ch = getch();
  while (ch != 'q')
    {
      if (get_pos_mouse(&x, &y, &key) == OK)
	{
	  if (key & BUTTON1_CLICKED)
	    return (0);
	  refresh();
	}
      else
	return (1);
    }
}
