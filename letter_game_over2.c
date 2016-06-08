/*
** letter_game_over2.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Wed Mar 16 19:47:03 2016
** Last update Wed Mar 16 23:35:01 2016 
*/

#include "tetris.h"

void	letter_O()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(40, 36, "****");
  mvprintw(41, 34, "********");
  mvprintw(42, 34, "**");
  mvprintw(42, 40, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(43, 34, "**");
  mvprintw(43, 40, "**");
  mvprintw(44, 34, "**");
  mvprintw(44, 40, "**");
  mvprintw(45, 34, "********");
  mvprintw(46, 36, "****");
  letter_O_3d();
}

void	letter_V()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(40, 46, "**");
  mvprintw(41, 46, "**");
  mvprintw(42, 46, "**");
  mvprintw(40, 54, "**");
  mvprintw(41, 54, "**");
  mvprintw(42, 54, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(43, 46, "**");
  mvprintw(44, 47, "**");
  mvprintw(45, 48, "**");
  mvprintw(46, 49, "****");
  mvprintw(43, 54, "**");
  mvprintw(44, 53, "**");
  mvprintw(45, 52, "**");
  letter_V_3d();
}

void	letter_E2()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(40, 60, "********");
  mvprintw(41, 60, "**");
  mvprintw(42, 60, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(43, 60, "*****");
  mvprintw(44, 60, "**");
  mvprintw(45, 60, "**");
  mvprintw(46, 60, "********");
  letter_E2_3d();
}

void	letter_R2()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(40, 72, "********");
  mvprintw(41, 72, "**");
  mvprintw(41, 78, "**");
  mvprintw(42, 72, "********");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(43, 72, "*****");
  mvprintw(44, 72, "**");
  mvprintw(44, 76, "**");
  mvprintw(45, 72, "**");
  mvprintw(45, 77, "**");
  mvprintw(46, 72, "**");
  mvprintw(46, 78, "**");
  letter_R2_3d();
}

void	q_or_r()
{
  WHITE7;
  attron(COLOR_PAIR(77));
  mvprintw(28, 47, "You lose...");
  mvprintw(30, 35, "Press 'Q' to quit or 'R' to restart");
}
