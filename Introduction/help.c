/*
** help.c for help in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 09:58:44 2015 POLI Yoann
** Last update Thu Dec 17 09:35:47 2015 POLI Yoann
*/

#include "headers/libmy.h"
#include "headers/lib_battle.h"

void	help()
{
  my_putstr(YELLOW);
  my_putstr("Help introduction :\n\n");
  my_putstr(RESET);
  my_putstr("\tTo play do : \"./sta [option] [name]\"\n\n");
  my_putstr(RED);
  my_putstr("\t[option] : \e[0m");
  my_putstr(RESET);
  my_putstr("-n (ADD_A_NAME)\n");
  my_putstr(RED);
  my_putstr("\t[name] :\e[0m NAME'S PLAYER\n\n");
  my_putstr(RESET);
  my_putstr("\tGood game !\n\n");
}
