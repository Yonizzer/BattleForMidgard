/*
** magic_catch.c for Magic Catch in /media/sf_midwut/midwut_SVN/Introduction
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Dec 16 15:05:32 2015 HUSSAIN Faisal
** Last update Thu Dec 17 10:51:12 2015 POLI Yoann
*/

#include <time.h>
#include <stdlib.h>
#include "headers/libmy.h"
#include "headers/lib_battle.h"

int	magic_catch(t_creature *creature)
{
  int	rnd;

  srand(time(NULL));
  rnd = rand() % 3;
  my_putstr("\t");
  if (rnd == 2)
    {
      my_putstr(GREEN);
      my_putstr("You have captured ");
      my_putstr(creature->name);
      my_putstr(" \n");
      my_putstr(RESET);
      return (0);
    }
  else
    {
      my_putstr(RED);
      my_putstr(BOLD);
      my_putstr(creature->name);
      my_putstr(" is attacking you !\n\n");
      my_putstr(RESET);
    }
  return (1);
}

void	looser_mode(t_creature *creature)
{
  my_putstr(YELLOW);
  my_putstr(BOLD);
  my_putstr("\tRunning away from ");
  my_putstr(creature->name);
  my_putstr(" !\n\n");
  my_putstr(RESET);
}
