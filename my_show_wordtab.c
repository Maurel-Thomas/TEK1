/*
** my_show_wordtab.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:09:11 2016
** Last update Thu Mar 17 23:33:05 2016 
*/

#include "tetris.h"

void	my_show_map(char **tabx)
{
  int	i;

  i = 0;
  while (tabx[i] != NULL)
   {
      mvprintw(15 + i, 60, tabx[i]);
      i += 1;
    }
}

void	my_show_tab(char **tabx)
{
  int	i;

  i = 0;
  while (tabx[i] != NULL)
    {
      mvprintw(15 + i, 62, tabx[i]);
      i += 1;
    }
  WHITE7;
  attron(COLOR_PAIR(77));
  mvprintw(18, 64, "Score:");
  mvprintw(21, 64, "High score:");
  CYAN6;
  attron(COLOR_PAIR(66));
}

void   	my_show_next_tab(char **tabx)
{
  int  	i;

  i = 0;
  CYAN6;
  attron(COLOR_PAIR(66));
  while (tabx[i] != NULL)
    {
      mvprintw(7 + i, 62, tabx[i]);
      i += 1;
    }
}

void   	my_show_time_tab(char **tabx)
{
  int  	i;

  i = 0;
  while (tabx[i] != NULL)
    {
      mvprintw(7 + i, 10, tabx[i]);
      i += 1;
    }
}

void   	my_show_level_tab(char **tabx)
{
  int  	i;

  i = 0;
  while (tabx[i] != NULL)
    {
      mvprintw(15 + i, 21, tabx[i]);
      i += 1;
    }
  WHITE7;
  attron(COLOR_PAIR(77));
  mvprintw(17, 23, "Level:");
  CYAN6;
  attron(COLOR_PAIR(66));
}
