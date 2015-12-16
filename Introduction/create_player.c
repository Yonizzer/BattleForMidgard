/*
** create_player.c for Create player list in /media/sf_midwut/midwut_SVN/Introduction
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Dec 16 16:00:06 2015 HUSSAIN Faisal
** Last update Wed Dec 16 16:06:57 2015 HUSSAIN Faisal
*/

#include <stdlib.h>
#include "headers/lib_battle.h"

t_info		*create_player(char *name)
{
  t_info	*player;

  player = malloc(sizeof(*player));
  if (player == NULL)
    return (NULL);
  player->name = name;
  player->pv = 100;
  player->pvmax = 100;
  player->team = NULL;
  return (player);
}
