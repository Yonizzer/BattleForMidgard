/*
** lib_battle.h for lib_battle in /home/yoann/projet/battle_for_midgard/poli_y/Introduction/headers
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 10:40:23 2015 POLI Yoann
** Last update Wed Dec 16 11:09:36 2015 POLI Yoann
*/

#ifndef LIB_BATTLE_H_
# define LIB_BATTLE_H_

/*
** Prototype Function for project 
*/

char	*readLine();
int	begin(char *name);
int	parse_arg(int argc, char **argv);
void	help();
void	message_handler(int error);

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

#endif /* !LIB_BATTLE_H_ */
