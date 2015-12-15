/*
** begin.c for begin in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 10:33:26 2015 POLI Yoann
** Last update Tue Dec 15 10:53:28 2015 POLI Yoann
*/

#include <stdlib.h>
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	begin(char *name_ply, char **argv)
{
  char	*choice;
  
  my_putstr("It's your turn [name_ply] > ");
  choice = readLine();
  if (choice != NULL)
    {
      if (my_strcmp(argv[1], "help me !!!") == 0)
	my_putchar('a');
      else if (my_strcmp(argv[1], "magic catch") == 0)
	my_putchar('b');
    }
  else
    my_putstr("Please enter a argument !");
  return (1);
}
