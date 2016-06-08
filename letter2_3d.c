/*
** letter2_3d.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:08:03 2016
** Last update Mon Mar 14 00:08:03 2016 
*/

#include "tetris.h"

void	letter_T2_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(29, 47, "\\");
  mvprintw(29, 39, "\\");
  mvprintw(30, 39, "\\");
  mvprintw(36, 42, "\\");
  mvprintw(29, 38, "|");
  mvprintw(31, 41, "|");
  mvprintw(32, 41, "|");
  mvprintw(33, 41, "|");
  mvprintw(34, 41, "|");
  mvprintw(35, 41, "|");
  mvprintw(28, 39, "________");
}

void	letter_T1_3d()
{
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(29, 27, "\\");
  mvprintw(29, 19, "\\");
  mvprintw(30, 19, "\\");
  mvprintw(36, 22, "\\");
  mvprintw(29, 18, "|");
  mvprintw(31, 21, "|");
  mvprintw(32, 21, "|");
  mvprintw(33, 21, "|");
  mvprintw(34, 21, "|");
  mvprintw(35, 21, "|");
  mvprintw(28, 19, "________");
}
