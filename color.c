/*
** color.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:06:31 2016
** Last update Mon Mar 14 00:06:32 2016 
*/

#include "tetris.h"

void	set_BLACK(int line, int col)
{
  BLACK;
  attron(COLOR_PAIR(0));
  mvprintw(3 + line, 44 + col, " ");
  attroff(COLOR_PAIR(0));
}

void	set_RED(int line, int col)
{
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(1));
}

void	set_GREEN(int line, int col)
{
  GREEN;
  attron(COLOR_PAIR(2));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(2));
}

void	set_YELLOW(int line, int col)
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(3));
}

void	set_BLUE(int line, int col)
{
  BLUE;
  attron(COLOR_PAIR(4));
  mvprintw(3 + line, 44 + col, "*");
  attroff(COLOR_PAIR(4));
}
