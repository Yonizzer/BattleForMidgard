/*
** help.c for help in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 09:58:44 2015 POLI Yoann
** Last update Wed Dec 16 11:41:40 2015 POLI Yoann
*/

#include "headers/libmy.h"

void	help()
{
  my_putstr("\e[34mHelp introduction :\e[0m \n\n");
  my_putstr("\tTo play do :\"./sta [option] [name]\"\n\n");
  my_putstr("\t\e[31m[option] : \e[0m");
  my_putstr("-n (ADD_A_NAME)\n");
  my_putstr("\t\e[31m[name] :\e[0m NAME'S PLAYER\n\n");
  my_putstr("\tGood game !\n\n");
}
