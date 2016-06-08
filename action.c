/*
** action.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:05:12 2016
** Last update Sun Mar 20 23:42:46 2016 
*/

#include "tetris.h"

void	display_time(t_struct *st)
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(50, 90, "QUIT");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(51, 88, "********");
  mvprintw(50, 88, "*");
  mvprintw(50, 95, "*");
  mvprintw(49, 88, "********");
  attroff(COLOR_PAIR(11));
  mvprintw(9, 15, "Timer:");
  mvprintw(9, 25, "%d", st->min);
  mvprintw(9, 27, ":");
  mvprintw(9, 29, "%d", (st->temp - st->la) % 60);
}

void	action(t_struct *st, t_list *list, int x)
{
  int	lign;

  lign = 0;
  st->x2 = st->x;
  if (x == KEY_DOWN && st-> x >= 1 &&
      st->x <= (10 - my_strlen(st->piece[lign])) && st-> y <= 19)
    {
      clear_map(st);
      st->piece = rotation(st);
    }
  if (x == KEY_LEFT && st->x > 1 && st->y <= 19)
     st->x -= 1;
  if (x == KEY_RIGHT &&
      st->x <= (10 - my_strlen(st->piece[lign])) && st->y <= 19)
    st->x += 1;
  if (x == 'q')
    {
      endwin();
      exit(0);
    }
}

void	quit(t_struct *st)
{
  if (check_click(st) == 0)
    {
      endwin();
      exit(1);
    }
}

void	escap_or_pause(t_struct *st, int x)
{
  int	i;

  i = 0;
  if (x == 'q')
    {
      endwin();
      exit(1);
    }
  else if (x == ' ')
    while (i == 0)
      {
	x = 0;
	x = getch();
	if (x == ' ')
          i += 1;
        else if (x == 'q')
	  {
	    endwin();
	    exit(1);
	  }
      }
  quit(st);
}

void	score_level(t_struct *st)
{
  BLUE4;
  attron(COLOR_PAIR(44));
  if (st->score == 300)
    {
      st->us = (st->us - 50000);
      st->us2 = (st->us2 + 50000);
      st->level += 1;
      st->score += 150;
    }
  else if (st->score == 1050)
    {
      st->us = (st->us - 50000);
      st->us2 = (st->us2 + 50000);
      st->level += 1;
      st->score += 150;
    }
  else if (st->score == 1500)
    {
      st->us = (st->us - 50000);
      st->us2 = (st->us2 + 50000);
      st->level += 1;
      st->score += 150;
    }
  mvprintw(18, 72, "%d", st->score);
  mvprintw(17, 31, "%d", st->level);
}
