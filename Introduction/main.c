/*
** main.c for main in /home/yoann/projet/battle_for_midgard/poli_y
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Dec 14 19:52:15 2015 POLI Yoann
** Last update Tue Dec 15 10:27:54 2015 POLI Yoann
*/

#include "stdlib.h"
#include "headers/libmy.h"

int	parse_arg(int argc, char **argv);
void	help();

int main(int argc, char **argv)
{
  int	check;
  
  check = parse_arg(argc, argv);
  if (check == -1)
    help();
  else
    my_putstr("bonjour vous avez passé l'étape 0.1!\n");
  return (0);
}
