/*
** my_strdup.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:09:30 2016
** Last update Mon Mar 14 00:09:32 2016 
*/

#include "tetris.h"

char	*my_strdup(char *str)
{
  char	*s;
  int	i;

  i = 0;
  if ((s = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      s[i] = str[i];
      i += 1;
    }
  s[i] = '\0';
  return (s);
}
