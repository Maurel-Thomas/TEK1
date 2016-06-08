/*
** letter_game_over_3d.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Wed Mar 16 22:27:12 2016
** Last update Wed Mar 16 23:25:49 2016 
*/

#include "tetris.h"

void	letter_G_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(17, 14, "\\");
  mvprintw(17, 18, "\\");
  mvprintw(17, 13, "|");
  mvprintw(16, 14, "____");
  mvprintw(14, 9, "\\");
  mvprintw(14, 17, "\\");
  mvprintw(14, 8, "|");
  mvprintw(14, 8, "|");
  mvprintw(15, 8, "|");
  mvprintw(16, 8, "|");
  mvprintw(17, 8, "|");
  mvprintw(13, 9, "________");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(21, 9, "\\");
  mvprintw(18, 14, "\\");
  mvprintw(18, 8, "|");
  mvprintw(19, 8, "|");
  mvprintw(20, 8, "|");
  mvprintw(20, 15, "\\");
  mvprintw(19, 12, "___");
  mvprintw(19, 15, "|");
}

void	letter_A_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(14, 23, "\\");
  mvprintw(14, 27, "\\");
  mvprintw(13, 23, "____");
  mvprintw(15, 21, "\\");
  mvprintw(14, 22, "|");
  mvprintw(14, 21, "_");
  mvprintw(15, 23, "\\");
  mvprintw(15, 20, "|");
  mvprintw(17, 27, "\\");
  mvprintw(16, 20, "|");
  mvprintw(17, 20, "|");
  mvprintw(15, 29, "\\");
  mvprintw(14, 28, "_");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(18, 20, "|");
  mvprintw(19, 20, "|");
  mvprintw(20, 20, "|");
  mvprintw(21, 21, "\\");
  mvprintw(21, 27, "\\");
  mvprintw(20, 26, "|");
  mvprintw(19, 26, "|");
}

void	letter_M_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(14, 33, "\\");
  mvprintw(14, 36, "\\");
  mvprintw(14, 40, "\\");
  mvprintw(14, 43, "\\");
  mvprintw(13, 33, "___");
  mvprintw(13, 40, "___");
  mvprintw(14, 32, "|");
  mvprintw(14, 39, "|");
  mvprintw(15, 39, "|");
  mvprintw(15, 32, "|");
  mvprintw(16, 32, "|");
  mvprintw(17, 32, "|");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(18, 32, "|");
  mvprintw(19, 32, "|");
  mvprintw(20, 32, "|");
  mvprintw(21, 33, "\\");
  mvprintw(21, 41, "\\");
  mvprintw(20, 40, "|");
  mvprintw(19, 40, "|");
  mvprintw(18, 37, "\\");
}

void	letter_E1_3d()
{
  YELLOW3;
  attron(COLOR_PAIR(33));
  mvprintw(14, 55, "\\");
  mvprintw(14, 47, "\\");
  mvprintw(13, 47, "________");
  mvprintw(14, 46, "|");
  mvprintw(15, 46, "|");
  mvprintw(16, 46, "|");
  mvprintw(17, 46, "|");
  mvprintw(17, 52, "\\");
  mvprintw(16, 50, "__");
  RED1;
  attron(COLOR_PAIR(11));
  mvprintw(19, 50, "_____");
  mvprintw(18, 46, "|");
  mvprintw(19, 46, "|");
  mvprintw(21, 47, "\\");
  mvprintw(20, 46, "|");
  mvprintw(20, 55, "\\");
}
