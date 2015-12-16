/*
** begin.c for begin in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 10:33:26 2015 POLI Yoann
** Last update Wed Dec 16 11:31:24 2015 POLI Yoann
*/

#include <stdlib.h>
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	choice_handler(char *choice, char *name)
{
  if (my_strcmp(choice, "help me !!!") == 0)
    my_putchar('a');
  else if (my_strcmp(choice, "magic catch") == 0)
    my_putchar('b');
  else if (my_strcmp(choice, "quit") == 0)
    return (1);
  else
    {
      my_putstr("Please enter a valid command !\n");
      begin(name);
    }
  return (0);
}

int	begin(char *name)
{
  char	*choice;

  my_putstr("It's your turn ");
  my_putstr(name);
  my_putstr(" > ");
  choice = readLine();
  if (choice == NULL)
    return (-1);
  else
    return (choice_handler(choice, name));
  return (0);
}
