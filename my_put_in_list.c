/*
** my_put_in_list.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:08:59 2016
** Last update Wed Mar 23 00:07:01 2016 
*/

#include "./tetris.h"

void	my_show_wordtab(char **tabx)
{
  int	l;

  l = 0;
  while (tabx[l])
    {
      if (tabx != NULL)
	my_putstr(tabx[l]);
      my_putchar('\n');
      l += 1;
    }
}

void		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list->next;
  while (tmp != list)
    {
      my_show_wordtab(tmp->obj);
      tmp = tmp->next;
    }
}

t_list		*my_first_in_list(void)
{
  t_list	*racin;

  if ((racin = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  if (racin != NULL)
    {
      racin->next = racin;
      racin->prev = racin;
    }
  return (racin);
}

t_list		*my_put_in_list(t_list *list, char **tabx)
{
  t_list	*elem;
  t_list	*tmp;

  tmp = list;
  if ((elem = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  if (elem == NULL)
    return (NULL);
  elem->obj = tabx;
  elem->prev = tmp;
  elem->next = tmp->next;
  tmp->next->prev = elem;
  tmp->next = elem;
  return (elem);
 }
