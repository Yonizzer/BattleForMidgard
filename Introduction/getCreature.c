/*
** getCreature.c for getCreature in /home/yoann/projet/battle_for_midgard/poli_y
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 08:50:05 2015 POLI Yoann
** Last update Wed Dec 16 22:47:39 2015 HUSSAIN Faisal
*/

#include <stdlib.h>
#include <string.h>
#include "headers/lib_battle.h"

#define NBCREA 18

static t_creature g_creatures[] =
  {
    {"Koopa", 1, 70, 70, 40, 40},
    {"Master", 1, 30, 30, 60, 60},
    {"Yoshi", 1, 30, 30, 18, 18},
    {"Maskas", 1, 40, 40, 20, 20},
    {"Bic4C", 1, 10, 10, 50, 50},
    {"Askip", 1, 50, 50, 25, 25},
    {"Salfaizzer", 1, 50, 50, 20, 20},
    {"ShaneDanger", 1, 50, 50, 20, 20},
    {"MikeMike", 1, 50, 50, 20, 20},
    {"Toinou", 1, 50, 50, 20, 20},
    {"Panda", 1, 50, 50, 20, 20},
    {"Pingouin", 1, 50, 50, 20, 20},
    {"Enileda", 1, 50, 50, 20, 20},
    {"Karaba", 1, 50, 50, 20, 20},
    {"Yopo", 1, 50, 50, 20, 20},
    {"Bangbang", 1, 50, 50, 20, 20},
    {"Salfaipas", 1, 50, 50, 20, 20},
    {"Yonizzer", 1, 10, 10, 50, 50},
    {NULL, 0, 0, 0, 0, 0}
  };


t_creature	*getCreature(t_creature *to_free)
{
  int		rnd;
  t_creature	*crea;

  if (to_free != NULL)
    free_creature(to_free);
  rnd = rand() % NBCREA;
  if ((crea = malloc(sizeof(t_creature))) == NULL)
    return (NULL);
  crea->name = strdup(g_creatures[rnd].name);
  if (!crea->name)
    return (NULL);
  crea->lvl = g_creatures[rnd].lvl;
  crea->pv = g_creatures[rnd].pv;
  crea->pvmax = g_creatures[rnd].pvmax;
  crea->pm = g_creatures[rnd].pm;
  crea->pmmax = g_creatures[rnd].pmmax;
  return (crea);
}
