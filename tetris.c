/*
** tetris.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Fri Mar 18 15:44:24 2016
** Last update Sun Mar 20 23:41:20 2016 
*/

#include "tetris.h"

void	object(t_struct *st, t_list *list, int x)
{
  erase();
  display_letter();
  score_tab();
  how_long();
  level_tab();
  who_is_next();
  collision(st, list);
  full_lign(st);
  game_over(st, list);
  action(st, list, x);
  deplacement(st);
  rotation(st);
}

void	set_map(t_struct *st)
{
  WHITE7;
  attron(COLOR_PAIR(77));
  display_map(st->map);
  st->y2 = st->y;
  st->y += 1;
}

void	timer(t_struct *st, t_list *list)
{
  int	x;

  st->piece = get_tetriminos(list);
  while (42)
    {
      escap_or_pause(st, x);
      usleep(st->us);
      timeout(1);
      x = getch();
      object(st, list, x);
      score_level(st);
      time(&st->temp);
      if ((st->temp - st->la) % 60 == 59)
	{
	  usleep(st->us2);
	  timeout(1);
	  st->min += 1;
	}
      display_time(st);
      set_map(st);
      refresh();
    }
}

void		init_ncurses(SCREEN *win)
{
  win = newterm(NULL, stderr, stdin);
  set_term(win);
  refresh();
  keypad(stdscr, 1);
  curs_set(0);
  start_color();
  noecho();
}

int		main(int ac, char **av)
{
  SCREEN	*win;
  t_struct	st;
  t_list	*list;

  list = NULL;
  list = open_directories(list);
  init_ncurses(win);
  st.map = NULL;
  key(&st);
  st.map = tab_map(st.map);
  loading(&st);
  time(&st.la);
  timer(&st, list);
  endwin();
  return (0);
}
