/*
** begin.c for begin in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 10:33:26 2015 POLI Yoann
** Last update Thu Dec 17 10:50:33 2015 POLI Yoann
*/

#include <stdlib.h>
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	choice_handler(char *choice, t_info *player, t_creature *creature)
{
  if (my_strcmp(choice, "help me !!!") == 0)
    {
      looser_mode(creature);
      creature = getCreature(creature);
    }
  else if (my_strcmp(choice, "magic catch") == 0)
    {
      if (magic_catch(creature) == 0)
	{
	  aff_creature(creature);
	  free_creature_choice(creature, choice);
	  return (0);
	}
      creature = getCreature(creature);
    }
  else if (my_strcmp(choice, "quit") == 0)
    {
      free(choice);
      return (1);
    }
  else
    my_putstr_clr("\tPlease enter a valid command !\n", RED);
  free(choice);
  begin(player, creature);
  return (0);
}

int	begin(t_info *player, t_creature *creature)
{
  int	res;
  char	*choice;

  res = 0;
  aff_crtr_name(creature);
  my_putstr("It's your turn ");
  my_putstr(player->name);
  my_putstr(" > ");
  choice = readLine();
  if (choice == NULL)
    res = -1;
  else
    res = choice_handler(choice, player, creature);
  return (res);
}
