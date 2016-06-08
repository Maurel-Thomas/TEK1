/*
** modif_tab.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:06:09 2016
** Last update Thu Mar 17 23:38:06 2016 
*/

#include "tetris.h"

void	showtab(char **tabx)
{
  int	n;

  n = 0;
  while (tabx[n] != NULL)
    {
      printf("%s\n", tabx[n]);
      n++;
    }
}

char	*short_while(char **tabx, char **array, int lign, int lign2)
{
  int	col;
  char	c;

  col = 0;
  c = tabx[0][4];
  while (col < my_getchar(tabx[0][0]))
    {
      if (tabx[lign][col] == '*')
	array[lign2][col] = c;
      else
	array[lign2][col] = '0';
      col += 1;
    }
  array[lign2][col] = '\0';
  return (array[lign2]);
}

char	**modif_tab(char **tabx)
{
  char	**array;
  int	lign;
  int	lign2;

  lign = 1;
  lign2 = 0;
  if ((array = malloc(sizeof(char *) * my_count_col(tabx))) == NULL)
    return (NULL);
  while (tabx[lign] != NULL)
    {
      if ((array[lign2] = malloc(sizeof(char)
				 * my_strlen(tabx[lign]))) == NULL)
	return (NULL);
      array[lign2] = short_while(tabx, array, lign, lign2);
      lign += 1;
      lign2 += 1;
    }
  free(tabx);
  array[lign] = NULL;
  return (array);
}
