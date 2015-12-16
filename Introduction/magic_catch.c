/*
** magic_catch.c for Magic Catch in /media/sf_midwut/midwut_SVN/Introduction
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Dec 16 15:05:32 2015 HUSSAIN Faisal
** Last update Wed Dec 16 16:19:34 2015 HUSSAIN Faisal
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
      my_putstr(creature->name);
      my_putstr(" is attacking you !\n");
      my_putstr(RESET);
    }
  return (1);
}
