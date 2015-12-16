/*
** parse_arg.c for parse_arg in /home/yoann/projet/battle_for_midgard/poli_y/Introduction
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 09:49:07 2015 POLI Yoann
** Last update Tue Dec 15 15:37:27 2015 POLI Yoann
*/

#include "headers/libmy.h"

int	parse_arg(int argc, char **argv)
{
  if (argc == 3)
    {
      if (my_strcmp(argv[1], "-n") == 0)
	{
	  return (0);
	}
      else
	return (-1);
    }
  else
    return (-1);
  return (0);
}
