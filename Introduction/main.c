/*
** main.c for main in /home/yoann/projet/battle_for_midgard/poli_y
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Dec 14 19:52:15 2015 POLI Yoann
** Last update Thu Dec 17 09:43:40 2015 POLI Yoann
*/

#include <time.h>
#include <stdlib.h>
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	runprogram(char **argv, t_creature *creature)
{
  int		out_begin;
  t_info	*player;

  player = create_player(argv[2]);
  out_begin = begin(player, creature);
  message_handler(out_begin);
  free_player(player);
  return (0);
}

int	main(int argc, char **argv)
{
  int		check;
  t_creature	*monster;

  srand(time(NULL));
  monster = getCreature(NULL);
  check = parse_arg(argc, argv);
  if (check == -1)
    help();
  else
    runprogram(argv, monster);
  return (0);
}
