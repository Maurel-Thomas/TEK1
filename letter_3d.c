/*
** letter_3d.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:08:13 2016
** Last update Mon Mar 14 00:08:14 2016 
*/

#include "tetris.h"

void	letter_S_3d()
{
  MAGENTA5;
  attron(COLOR_PAIR(55));
  mvprintw(29, 69, "\\");
  mvprintw(29, 77, "\\");
  mvprintw(32, 77, "\\");
  mvprintw(35, 69, "\\");
  mvprintw(36, 69, "\\");
  mvprintw(33, 69, "\\");
  mvprintw(35, 74, "\\");
  mvprintw(35, 68, "|");
  mvprintw(29, 68, "|");
  mvprintw(30, 68, "|");
  mvprintw(31, 68, "|");
  mvprintw(32, 68, "|");
  mvprintw(34, 74, "|");
  mvprintw(28, 69, "________");
  mvprintw(34, 69, "_____");
  mvprintw(31, 72, "_____");
}

void	letter_R_3d()
{
  GREEN2;
  attron(COLOR_PAIR(22));
  mvprintw(29, 49, "\\");
  mvprintw(29, 57, "\\");
  mvprintw(36, 49, "\\");
  mvprintw(36, 54, "\\");
  mvprintw(36, 55, "_");
  mvprintw(35, 53, "\\");
  mvprintw(34, 52, "\\");
  mvprintw(31, 55, "\\");
  mvprintw(35, 48, "|");
  mvprintw(34, 48, "|");
  mvprintw(33, 48, "|");
  mvprintw(32, 48, "|");
  mvprintw(31, 48, "|");
  mvprintw(30, 48, "|");
  mvprintw(29, 48, "|");
  mvprintw(28, 49, "________");
}

void	letter_I_3d()
{
  CYAN6;
  attron(COLOR_PAIR(66));
  mvprintw(29, 61, "\\");
  mvprintw(29, 65, "\\");
  mvprintw(30, 61, "\\");
  mvprintw(36, 61, "\\");
  mvprintw(35, 61, "\\");
  mvprintw(29, 60, "|");
  mvprintw(35, 60, "|");
  mvprintw(28, 61, "____");
  mvprintw(34, 61, "_");
  mvprintw(34, 61, "|");
  mvprintw(33, 61, "|");
  mvprintw(32, 61, "|");
  mvprintw(31, 61, "|");
}

void	letter_E_3d()
{
  BLUE4;
  attron(COLOR_PAIR(44));
  mvprintw(29, 37, "\\");
  mvprintw(29, 29, "\\");
  mvprintw(36, 29, "\\");
  mvprintw(28, 29, "________");
  mvprintw(29, 28, "|");
  mvprintw(30, 28, "|");
  mvprintw(31, 28, "|");
  mvprintw(32, 28, "|");
  mvprintw(33, 28, "|");
  mvprintw(34, 28, "|");
  mvprintw(35, 28, "|");
  mvprintw(35, 37, "\\");
  mvprintw(32, 34, "\\");
  mvprintw(34, 32, "_____");
  mvprintw(31, 32, "__");
}
