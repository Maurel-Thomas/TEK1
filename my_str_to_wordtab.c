/*
** my_str_to_wordtab.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:09:49 2016
** Last update Thu Mar 17 23:33:40 2016 
*/

#include "./tetris.h"

int	count_colon(char *str, int i)
{
  int	c;

  c = 0;
  while (str[i] != '\n' && str[i] != '\0')
    {
      i += 1;
      c += 1;
    }
  return (c);
}

int	count_lign(char *str)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	c += 1;
      i += 1;
    }
  return (c);
}

char	**my_str_to_wordtab(char *str, char **tabx)
{
  int	i;
  int	l;
  int	c;

  i = 0;
  l = 0;
  if ((tabx = malloc(sizeof(char *) * (count_lign(str) + 2))) == NULL)
    return (NULL);
  while (str[i])
    {
      c = 0;
      if ((tabx[l] = malloc(sizeof(char) * (count_colon(str, i) + 1))) == NULL)
	return (NULL);
      while (str[i] != '\0' && str[i] != '\n')
	{
	  tabx[l][c] = str[i];
	  i += 1;
	  c += 1;
	}
      tabx[l][c] = 0;
      l += 1;
      if ((str[i] == '\n') ? (i += 1) : (i));
    }
  tabx[l] = NULL;
  return (tabx);
}
