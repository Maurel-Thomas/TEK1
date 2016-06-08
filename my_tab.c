/*
** my_tab.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:10:00 2016
** Last update Thu Mar 17 23:34:47 2016 
*/

#include "tetris.h"

void	*score_tab()
{
  char  **tabx;
  int   i;

  i = 1;
  CYAN6;
  attron(COLOR_PAIR(66));
  if ((tabx = malloc(sizeof(char *) * 12)) == NULL)
    return (NULL);
  tabx[0] = my_strdup("/-----Score tab-----\\");
  while (i < 10)
    {
      tabx[i] = my_strdup("|                   |");
      i += 1;
    }
  tabx[10] = my_strdup("\\-------------------/");
  tabx[11] = '\0';
  my_show_tab(tabx);
}

void	*who_is_next()
{
  int	w;
  char	**tabx;

  w = 1;
  if ((tabx = malloc(sizeof(char *) * 8)) == NULL)
    return (NULL);
  tabx[0] = my_strdup("/Who's next?\\");
  while (w < 6)
   {
     tabx[w] = my_strdup ("|           |");
     w += 1;
   }
  tabx[6] = my_strdup("\\-----------/");
  tabx[7] = '\0';
  my_show_next_tab(tabx);
}

void	*how_long()
{
  int	h;
  char	**tabx;

  h = 1;
  if ((tabx = malloc(sizeof(char *) * 6)) == NULL)
    return (NULL);
  tabx[0] = my_strdup("/How long before you lose?\\");
  while (h < 4)
    {
      tabx[h] = my_strdup("|                         |");
      h += 1;
    }
  tabx[4] = my_strdup("\\-------------------------/");
  tabx[5] = '\0';
  my_show_time_tab(tabx);
}

void	*level_tab()
{
  char	**tabx;
  int	l;

  l = 1;
  if ((tabx = malloc(sizeof(char *) * 6)) == NULL)
    return (NULL);
  tabx[0] = my_strdup("/--Difficulty--\\");
  while (l < 4)
    {
      tabx[l] = my_strdup("|              |");
      l += 1;
    }
  tabx[4] = my_strdup("\\--------------/");
  tabx[5] = '\0';
  my_show_level_tab(tabx);
  attroff(COLOR_PAIR(66));
}
