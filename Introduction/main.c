/*
** main.c for main in /home/yoann/projet/battle_for_midgard/poli_y
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Dec 14 19:52:15 2015 POLI Yoann
** Last update Wed Dec 16 11:10:56 2015 HUSSAIN Faisal
*/

#include "stdlib.h"
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	runprogram(char **argv)
{
  int	out_begin;
  
  out_begin = begin(argv[2]);
  message_handler(out_begin);
  return (0);
}

int	main(int argc, char **argv)
{
  int	check;

  check = parse_arg(argc, argv);
  if (check == -1)
    help();
  else
    runprogram(argv);
  return (0);
}
