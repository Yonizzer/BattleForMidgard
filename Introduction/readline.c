/*
** readline.c for readLine in /home/yoann/projet/battle_for_midgard/poli_y
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Tue Dec 15 08:48:17 2015 POLI Yoann
** Last update Tue Dec 15 15:41:31 2015 POLI Yoann
*/

/*
  Cette fonction permet de récuper une ligne
  de moins de 50 caracteres sur l'entrée standard.
  La fonction ne prend pas de paramètre et renvoi une chaine
  allouée (pensez a free()).
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>

char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
