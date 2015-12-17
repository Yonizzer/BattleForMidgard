/*
** free_list.c for Free Creature List in /media/sf_midwut/midwut_SVN/Introduction
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Dec 16 22:28:18 2015 HUSSAIN Faisal
** Last update Thu Dec 17 10:52:18 2015 POLI Yoann
*/

#include <stdlib.h>
#include "headers/lib_battle.h"

void	free_creature(t_creature *to_free)
{
  free(to_free->name);
  free(to_free);
}

void	free_player(t_info *to_free)
{
  free(to_free);
}

void	free_all(t_creature *creature, t_info *player)
{
  free_creature(creature);
  free_player(player);
}

void	free_creature_choice(t_creature *creature, char *choice)
{
  free_creature(creature);
  free(choice);
}
