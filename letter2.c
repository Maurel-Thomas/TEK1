/*
** letter2.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:07:50 2016
** Last update Mon Mar 14 00:07:51 2016 
*/

#include "tetris.h"

void	letter_T2()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(30, 40, "********");
  mvprintw(31, 43, "**");
  mvprintw(32, 43, "**");
  mvprintw(33, 43, "**");
  mvprintw(34, 43, "**");
  mvprintw(35, 43, "**");
  mvprintw(36, 43, "**");
  attroff(COLOR_PAIR(3));
  letter_T2_3d();
}

void	letter_T1()
{
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(30, 20, "********");
  mvprintw(31, 23, "**");
  mvprintw(32, 23, "**");
  mvprintw(33, 23, "**");
  mvprintw(34, 23, "**");
  mvprintw(35, 23, "**");
  mvprintw(36, 23, "**");
  attroff(COLOR_PAIR(1));
  letter_T1_3d();
}

void	display_letter()
{
  letter_T1();
  letter_E();
  letter_T2();
  letter_R();
  letter_I();
  letter_S();
  tetris_tab();
}
