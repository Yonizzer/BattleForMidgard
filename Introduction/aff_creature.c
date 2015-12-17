/*
** aff_creature.c for Show creature specification in /media/sf_midwut/midwut_SVN/Introduction
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:43:16 2015 HUSSAIN Faisal
** Last update Wed Dec 16 23:22:40 2015 HUSSAIN Faisal
*/

#include "headers/libmy.h"
#include "headers/lib_battle.h"

void	aff_creature(t_creature *crtr)
{
  my_putstr("\n\t");
  my_putstr_clr(crtr->name, RED);
  my_putstr_clr("\n\tLevel\t", CYAN);
  my_put_nbr(crtr->lvl);
  my_putstr_clr("\n\tPVmax\t", CYAN);
  my_put_nbr(crtr->pvmax);
  my_putstr_clr("\n\tPMmax\t", CYAN);
  my_put_nbr(crtr->pmmax);
  my_putstr("\n");
}

void	aff_crtr_name(t_creature *crtr)
{
  my_putstr("\tThe monster ");
  my_putstr(crtr->name);
  my_putstr(" appears !\n");
}
