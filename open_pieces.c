/*
** open_pieces.c for tetris in /home/nasrat_v/rendu/PSU_2015/Pakpak/val
**
** Made by
** Login   <nasrat_v@epitech.net>
**
** Started on  Mon Mar 14 00:10:12 2016
** Last update Sun Mar 20 23:43:21 2016 
*/

#include "./tetris.h"

char	*my_path_dir(char *name)
{
  char	t[] = "tetrimino/";
  char	*str;
  int	i;
  int	a;

  i = 0;
  a = 0;
  if ((str = malloc(sizeof(char) * (my_strlen(name) + 11))) == NULL)
    return (NULL);
  while (t[i] != '\0')
    {
      str[i] = t[i];
      i += 1;
    }
  while (name[a])
    {
      str[i] = name[a];
      a += 1;
      i += 1;
    }
  str[i] = '\0';
  return (str);
}

char		**open_file(char *name)
{
  struct stat	sb;
  char		**tab;
  char		*str;
  int		fd;
  int		r;

  tab = NULL;
  name = my_path_dir(name);
  stat(name, &sb);
  if ((fd = open(name, O_RDONLY)) == -1)
    return (NULL);
  if ((str = malloc(sizeof(char) * sb.st_size + 1)) == NULL)
    return (NULL);
  if ((r = read(fd, str, sb.st_size)) <= 0)
    return (NULL);
  str[r] = '\0';
  tab = my_str_to_wordtab(str, tab);
  if ((tab = check_pieces(tab)) != NULL)
    tab = modif_tab(tab);
  free(str);
  free(name);
  return (tab);
}

t_list		*open_directories(t_list *list)
{
  struct dirent	*read;
  char		**tab;
  DIR		*rep;

  rep = opendir("tetrimino");
  if (rep == NULL)
    return (NULL);
  list = my_first_in_list();
  while ((read = readdir(rep)) != NULL)
    {
      if (read->d_name[0] != '.')
	{
	  if ((tab = open_file(read->d_name)) != NULL)
	    my_put_in_list(list, tab);
	}
    }
  free(rep);
  return (list);
}
