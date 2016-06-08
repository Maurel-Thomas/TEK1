/*
** tetris.h for tetris.h in /home/felten_n/rendu/Programme_sys_UNIX/PSU_2015_tetris
**
** Made by nicolas felten
** Login   <felten_n@epitech.net>
**
** Started on  Fri Feb 26 12:58:01 2016 nicolas felten
** Last update Sun Mar 20 23:41:52 2016 
*/

#ifndef TETRIS_H_
# define TETRIS_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>
#include <curses.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BLACK0          init_pair(00, -1, -1)
#define RED1            init_pair(11, COLOR_RED, 0)
#define GREEN2          init_pair(22, COLOR_GREEN, 0)
#define YELLOW3         init_pair(33, COLOR_YELLOW, 0)
#define BLUE4           init_pair(44, COLOR_BLUE, 0)
#define MAGENTA5        init_pair(55, COLOR_MAGENTA, 0)
#define CYAN6           init_pair(66, COLOR_CYAN, 0)
#define WHITE7          init_pair(77, COLOR_WHITE, 0)

#define BLACK		init_pair(0, COLOR_BLACK, COLOR_BLACK)
#define RED		init_pair(1, COLOR_RED, COLOR_RED)
#define GREEN		init_pair(2, COLOR_GREEN, COLOR_GREEN)
#define YELLOW		init_pair(3, COLOR_YELLOW, COLOR_YELLOW)
#define BLUE		init_pair(4, COLOR_BLUE, COLOR_BLUE)
#define MAGENTA		init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA)
#define CYAN		init_pair(6, COLOR_CYAN, COLOR_CYAN)
#define WHITE		init_pair(7, COLOR_WHITE, COLOR_WHITE)

typedef struct	s_collision
{
  int		col;
  int		col2;
  int		lign;
  int		lign2;

}		t_collision;

typedef struct	s_struct
{
  char		**map;
  char		**piece;
  int		x;
  int		y;
  int		x2;
  int		y2;
  time_t	la;
  time_t	temp;
  int		min;
  int		score;
  int		level;
  int		us;
  int		us2;
}		t_struct;

typedef struct	s_list
{
  char		**obj;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

/* !LIBMY_A_ */
int	my_strlen(char *str);
int	my_printf(char const *str, ...);
void	my_putchar(char c);
void	my_putstr(char *str);
char	*my_strcpy(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);

/* !TETRIS_C_ */
void	object(t_struct *st, t_list *list, int x);
void	set_map(t_struct *st);
void	timer(t_struct *st, t_list *list);
void	init_ncurses(SCREEN *win);
void	key(t_struct *st);
int	main(int ac, char **av);

/* !OPEN_PIECES_C_ */
char	*my_path_dir(char *name);
char	**open_file(char *name);
t_list	*open_directories(t_list *list);

/* !CHECK_PIECES_C_ */
int	check_x_y_pieces(char **tabx, int x, int y);
int	check_lign_pieces(char *str, int l);
char	**check_pieces(char **tabx);

/* !CHECK_ERROR_C_ */
void	flag(int ac, char **av);

/* !GET_TETRIMINOS_C_ */
char	**get_tetriminos(t_list *list);

/* !MY_PUT_IN_LIST_C_ */
void	my_show_wordtab(char **tabx);
void	my_show_list(t_list *list);
t_list	*my_first_in_list(void);
t_list	*my_put_in_list(t_list *list, char **tabx);

/* !MY_STR_TO_WORDTAB_ */
int	count_colon(char *str, int i);
int	count_lign(char *str);
char	**my_str_to_wordtab(char *str, char **tabx);

/* !MY_TAB_C_ */
void	*score_tab();
void	*who_is_next();
void	*how_long();
void	*level_tab();

/* !TAB_C_ */
char	**tab_map(char **map);

/* !MY_SHOW_WORDTAB_C_ */
void	my_show_map(char **tabx);
void	my_show_tab(char **tabx);
void	my_show_next_tab(char **tabx);
void	my_show_time_tab(char **tabx);
void	my_show_level_tab(char **tabx);

/* !MY_STRUP_C_ */
char	*my_strdup(char *str);

/* !MODIF_TAB_C_ */
void	showtab(char **tabx);
char	*short_while(char **tabx, char **array, int lign, int lign2);
char	**modif_tab(char **tabx);

/* !MY_GETCHAR_C_ */
int	my_count_col(char **tabx);
int	my_getchar(char c);

/* !DISPLAY_MAP_C_ */
void	display_map(char **tabx);

/* !ACTION_C_ */
void	display_time(t_struct *st);
void	action(t_struct *st, t_list *list, int x);
void	quit(t_struct *st);
void	escap_or_pause(t_struct *st, int x);
void	score_level(t_struct *st);

/* !DEPLACEMENT_C_ */
void	clear_map(t_struct *st);
void	deplacement(t_struct *st);
void	lign_down(t_struct *st);
void	full_lign(t_struct *st);
char	**rotation(t_struct *st);

/* !COLLISION_C_*/
int	cnt(char **piece, int col);
int	return_collision(t_struct *st, t_list *list, t_collision *ini);
int	else_return_collision(t_struct *st, t_list *list, t_collision *ini);
int	count_collision(t_struct *st, t_collision *ini);
int	collision(t_struct *st, t_list *list);

/* !MOUSE_C_ */
void	tetris_loading(int nb);
void	loading(t_struct *st);
void	init_mouse();
int	get_pos_mouse(int *x, int *y, int *key);
int	check_click(t_struct *st);

/* !GAME_OVER_C_ */
int	restart_or_quit(t_struct *st, t_list *list, int x);
void	display_game_over(int x);
int	game_over(t_struct *st, t_list *list);
void	key(t_struct *st);

/* !COLOR_C_ */
void	set_BLACK(int line, int col);
void	set_RED(int line, int col);
void	set_GREEN(int line, int col);
void	set_YELLOW(int line, int col);
void	set_BLUE(int line, int col);

/* !COLOR2_C_ */
void	set_MAGENTA(int line, int col);
void	set_CYAN(int line, int col);
void	set_WHITE(int line, int col);
void	display_char(int c, int line, int col);

/* !LETTER_C_ */
void	tetris_tab();
void	letter_S();
void	letter_R();
void	letter_I();
void	letter_E();

/* !LETTER2_C_ */
void	letter_T2();
void	letter_T1();
void	display_letter();

/* !LETTER_3D_C_ */
void	letter_S_3d();
void	letter_R_3d();
void	letter_I_3d();
void	letter_E_3d();

/* !LETTER2_3D_C_ */
void	letter_T2_3d();
void	letter_T1_3d();

/* !LETTER_GAME_OVER_C_ */
void	letter_G();
void	letter_A();
void	letter_M();
void	letter_E1();
void	display_letter_over(int nb);

/* !LETTER_GAME_OVER2_C_ */
void	letter_O();
void	letter_V();
void	letter_E2();
void	letter_R2();
void	q_or_r();

/* !LETTER_GAME_OVER_3D_C_ */
void	letter_G_3d();
void	letter_A_3d();
void	letter_M_3d();
void	letter_E1_3d();

/* !LETTER_GAME_OVER2_3D_C_ */
void	letter_O_3d();
void	letter_V_3d();
void	letter_E2_3d();
void	letter_R2_3d();

#endif /* !MY_H_ */
