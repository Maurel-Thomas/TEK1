/*
** letter_game_over.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Tue Mar 15 19:47:53 2016
** Last update Tue Mar 22 16:33:32 2016 
*/

#include "tetris.h"

void	letter_G()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(15, 10, "********");
  mvprintw(16, 10, "**");
  mvprintw(17, 10, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(18, 10, "**");
  mvprintw(18, 15, "****");
  mvprintw(19, 10, "**");
  mvprintw(19, 16, "**");
  mvprintw(20, 10, "**");
  mvprintw(20, 16, "**");
  mvprintw(21, 10, "********");
  letter_G_3d();
}

void	letter_A()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(15, 24, "****");
  mvprintw(16, 22, "********");
  mvprintw(17, 22, "**");
  mvprintw(17, 28, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(18, 22, "**");
  mvprintw(18, 28, "**");
  mvprintw(18, 24, "****");
  mvprintw(19, 22, "**");
  mvprintw(19, 28, "**");
  mvprintw(20, 22, "**");
  mvprintw(20, 28, "**");
  mvprintw(21, 22, "**");
  mvprintw(21, 28, "**");
  letter_A_3d();
}

void	letter_M()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(15, 34, "***");
  mvprintw(16, 36, "**");
  mvprintw(16, 34, "**");
  mvprintw(17, 37, "**");
  mvprintw(17, 34, "**");
  mvprintw(15, 41, "***");
  mvprintw(16, 40, "**");
  mvprintw(16, 42, "**");
  mvprintw(17, 39, "**");
  mvprintw(17, 42, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(18, 38, "**");
  mvprintw(18, 34, "**");
  mvprintw(19, 34, "**");
  mvprintw(20, 34, "**");
  mvprintw(21, 34, "**");
  mvprintw(18, 38, "**");
  mvprintw(18, 42, "**");
  mvprintw(19, 42, "**");
  mvprintw(20, 42, "**");
  mvprintw(21, 42, "**");
  letter_M_3d();
}

void    letter_E1()
{
  YELLOW;
  attron(COLOR_PAIR(3));
  mvprintw(15, 48, "********");
  mvprintw(16, 48, "**");
  mvprintw(17, 48, "**");
  RED;
  attron(COLOR_PAIR(1));
  mvprintw(18, 48, "*****");
  mvprintw(19, 48, "**");
  mvprintw(20, 48, "**");
  mvprintw(21, 48, "********");
  letter_E1_3d();
}

void	display_letter_over(int nb)
{
  if (nb == 0)
    letter_G();
  else if (nb == 10)
    letter_A();
  else if (nb == 20)
    letter_M();
  else if (nb == 30)
    letter_E1();
  else if (nb == 40)
    letter_O();
  else if (nb == 50)
    letter_V();
  else if (nb == 60)
    letter_E2();
  else if (nb == 70)
      letter_R2();
}
