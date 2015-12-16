/*
** msg_handler.c for Message Handler in /media/sf_midwut/midwut_SVN/Introduction
** 
** Made by HUSSAIN Faisal
** Login   <hussai_f@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:28:52 2015 HUSSAIN Faisal
** Last update Wed Dec 16 11:16:33 2015 HUSSAIN Faisal
*/

#include "headers/libmy.h"
#include "headers/lib_battle.h"

void	message_handler(int error)
{
  if (error == -1)
    my_putstr("Memory exhauted !\n");
  else if (error == 1)
    my_putstr("You have leave the game!\n");
  else
    my_putstr("TOTOAOTA\n");
}
