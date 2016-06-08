/*
** letter_game_over2_3d.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Wed Mar 16 22:32:09 2016
** Last update Wed Mar 16 23:30:28 2016 
*/

#include "tetris.h"

void	letter_O_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(39, 35, "\\");
  mvprintw(39, 39, "\\");
  mvprintw(38, 35, "____");
  mvprintw(39, 34, "|");
  mvprintw(39, 33, "_");
  mvprintw(40, 41, "\\");
  mvprintw(42, 38, "|");
  mvprintw(39, 40, "_");
  mvprintw(40, 35, "\\");
  mvprintw(40, 33, "\\");
  mvprintw(40, 32, "|");
  mvprintw(41, 32, "|");
  mvprintw(42, 32, "|");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(43, 32, "|");
  mvprintw(44, 32, "|");
  mvprintw(45, 33, "\\");
  mvprintw(46, 35, "\\");
  mvprintw(44, 39, "\\");
  mvprintw(43, 38, "|");
  mvprintw(43, 36, "__");
}

void	letter_V_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(39, 45, "\\");
  mvprintw(39, 47, "\\");
  mvprintw(39, 53, "\\");
  mvprintw(39, 55, "\\");
  mvprintw(38, 45, "__");
  mvprintw(38, 53, "__");
  mvprintw(39, 44, "|");
  mvprintw(40, 44, "|");
  mvprintw(41, 44, "|");
  mvprintw(42, 44, "|");
  mvprintw(39, 52, "|");
  mvprintw(40, 52, "|");
  mvprintw(41, 52, "|");
  mvprintw(42, 52, "|");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(43, 44, "|");
  mvprintw(43, 52, "|");
  mvprintw(44, 51, "/");
  mvprintw(44, 45, "\\");
  mvprintw(45, 46, "\\");
  mvprintw(46, 47, "\\");
  mvprintw(46, 48, "_");
}

void	letter_E2_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(39, 67, "\\");
  mvprintw(39, 59, "\\");
  mvprintw(38, 59, "________");
  mvprintw(39, 58, "|");
  mvprintw(40, 58, "|");
  mvprintw(41, 58, "|");
  mvprintw(42, 58, "|");
  mvprintw(41, 62, "__");
  mvprintw(42, 64, "\\");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(43, 58, "|");
  mvprintw(44, 58, "|");
  mvprintw(45, 58, "|");
  mvprintw(45, 67, "\\");
  mvprintw(44, 62, "_____");
  mvprintw(46, 59, "\\");
}

void	letter_R2_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(39, 71, "\\");
  mvprintw(39, 79, "\\");
  mvprintw(41, 77, "\\");
  mvprintw(42, 70, "|");
  mvprintw(41, 70, "|");
  mvprintw(40, 70, "|");
  mvprintw(39, 70, "|");
  mvprintw(38, 71, "________");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(46, 71, "\\");
  mvprintw(46, 76, "\\");
  mvprintw(46, 77, "_");
  mvprintw(45, 75, "\\");
  mvprintw(44, 74, "\\");
  mvprintw(45, 70, "|");
  mvprintw(44, 70, "|");
  mvprintw(43, 70, "|");
}
