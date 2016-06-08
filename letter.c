/*
** letter.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:07:42 2016
** Last update Mon Mar 14 00:07:43 2016 
*/

#include "tetris.h"

void	tetris_tab()
{
  BLUE4;
  attron(COLOR_PAIR(44));
  mvprintw(27, 16, "_________________________________");
  mvprintw(37, 49, "_________________________________");
  mvprintw(27, 49, "_________________________________");
  mvprintw(37, 16, "_________________________________");
  mvprintw(40, 44, "EpiTetris (C)");
  mvprintw(41, 46, "maurel_b");
  mvprintw(42, 46, "nasrat_v");

}

void	letter_S()
{
  MAGENTA;
  attron(COLOR_PAIR(5));
  mvprintw(30, 70, "********");
  mvprintw(31, 70, "**");
  mvprintw(32, 70, "**");
  mvprintw(33, 70, "********");
  mvprintw(34, 76, "**");
  mvprintw(35, 76, "**");
  mvprintw(36, 70, "********");
  attroff(COLOR_PAIR(5));
  letter_S_3d();
  WHITE7;
  attroff(COLOR_PAIR(7));
}

void	letter_R()
{
  GREEN;
  attron(COLOR_PAIR(2));
  mvprintw(30, 50, "********");
  mvprintw(31, 50, "**");
  mvprintw(31, 56, "**");
  mvprintw(32, 50, "********");
  mvprintw(33, 50, "*****");
  mvprintw(34, 50, "**");
  mvprintw(34, 54, "**");
  mvprintw(35, 50, "**");
  mvprintw(35, 55, "**");
  mvprintw(36, 50, "**");
  mvprintw(36, 56, "**");
  attroff(COLOR_PAIR(2));
  letter_R_3d();
}

void	letter_I()
{
  CYAN;
  attron(COLOR_PAIR(6));
  mvprintw(30, 62, "****");
  mvprintw(31, 63, "**");
  mvprintw(32, 63, "**");
  mvprintw(33, 63, "**");
  mvprintw(34, 63, "**");
  mvprintw(35, 63, "**");
  mvprintw(36, 62, "****");
  attroff(COLOR_PAIR(6));
  letter_I_3d();
}

void	letter_E()
{
  BLUE;
  attron(COLOR_PAIR(4));
  mvprintw(30, 30, "********");
  mvprintw(31, 30, "**");
  mvprintw(32, 30, "**");
  mvprintw(33, 30, "*****");
  mvprintw(34, 30, "**");
  mvprintw(35, 30, "**");
  mvprintw(36, 30, "********");
  attroff(COLOR_PAIR(4));
  letter_E_3d();
}
