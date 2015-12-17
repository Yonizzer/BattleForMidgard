/*
** lib_battle.h for lib_battle in /home/yoann/projet/battle_for_midgard/poli_y/Introduction/headers
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 10:40:23 2015 POLI Yoann
** Last update Thu Dec 17 10:58:24 2015 POLI Yoann
*/

#ifndef LIB_BATTLE_H_
# define LIB_BATTLE_H_

/*
** List
*/

typedef struct	s_creature
{
  char		*name;
  int		lvl;
  int		pv;
  int		pvmax;
  int		pm;
  int		pmmax;
}		t_creature;

typedef struct	s_info
{
  char		*name;
  int		pv;
  int		pvmax;
  t_creature	*team;
}		t_info;

/*
** Prototype Function for project
*/

char		*readLine();
t_info		*create_player(char *);
int		parse_arg(int argc, char **argv);
void		help();
void		message_handler(int error);
int		begin(t_info *, t_creature *);
t_creature	*getCreature(t_creature *);
void		aff_creature(t_creature *);
void		aff_crtr_name(t_creature *);
int		magic_catch(t_creature *);
void		looser_mode(t_creature *);
void		free_creature(t_creature *);
void		free_player(t_info *);
void		free_al(t_creature *, t_info *);
void		free_creature_choice(t_creature *, char *);

#define RESET	"\e[0m"
#define BOLD	"\e[1m"
#define RED	"\e[31m"
#define GREEN	"\e[32m"
#define YELLOW	"\e[33m"
#define BLUE	"\e[34m"
#define CYAN	"\e[36m"
#define WHITE	"\e[37m"

#endif /* !LIB_BATTLE_H_ */
