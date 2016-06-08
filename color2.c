/*
** color2.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:06:44 2016
** Last update Sun Mar 20 23:43:51 2016 
*/

#include "tetris.h"

void	set_MAGENTA(int line, int col)
{
  MAGENTA;
  attron(COLOR_PAIR(5));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(5));
}

void	set_CYAN(int line, int col)
{
  CYAN;
  attron(COLOR_PAIR(6));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(6));
}

void	set_WHITE(int line, int col)
{
  WHITE;
  attron(COLOR_PAIR(7));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(7));
}

void	display_char(int c, int line, int col)
{
  void	(*tab[8])(int, int);

  tab[0] = &set_BLACK;
  tab[1] = &set_RED;
  tab[2] = &set_GREEN;
  tab[3] = &set_YELLOW;
  tab[4] = &set_BLUE;
  tab[5] = &set_MAGENTA;
  tab[6] = &set_CYAN;
  tab[7] = &set_WHITE;
  (*tab[c])(line, col);
}
