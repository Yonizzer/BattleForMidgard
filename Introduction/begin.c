/*
** begin.c for begin in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 10:33:26 2015 POLI Yoann
** Last update Wed Dec 16 16:20:48 2015 HUSSAIN Faisal
*/

#include <stdlib.h>
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	choice_handler(char *choice, t_info *player, t_creature *creature)
{
  if (my_strcmp(choice, "help me !!!") == 0)
    my_putchar('a');
  else if (my_strcmp(choice, "magic catch") == 0)
    {
      if (magic_catch(creature) == 0)
	{
	  aff_creature(creature);
	  return (0);
	}
      creature = getCreature();
    }
  else if (my_strcmp(choice, "quit") == 0)
    return (1);
  else
    my_putstr("\e[31m\tPlease enter a valid command !\e[0m\n");
  begin(player, creature);
  return (0);
}

int	begin(t_info *player, t_creature *creature)
{
  char	*choice;

  aff_crtr_name(creature);
  my_putstr("It's your turn ");
  my_putstr(player->name);
  my_putstr(" > ");
  choice = readLine();
  if (choice == NULL)
    return (-1);
  else
    return (choice_handler(choice, player, creature));
  return (0);
}
