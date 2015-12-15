/*
** libmy.h for libmy in /home/yoann/projet/battle_for_midgard/poli_y
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Mon Dec 14 20:11:33 2015 POLI Yoann
** Last update Mon Dec 14 20:20:06 2015 POLI Yoann
*/

#ifndef LIBMY_H_
# define LIBMY_H_

void	my_putchar(char c);
int	my_isneg(int n);
int	my_is_odd(int n);
void	my_put_nbr(int nb);
void	my_swap(int *a, int *b);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
char	*mystrcpy(char *dest, char *src);
char	*mystrncpy(char *dest, char *src, int n);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*mystrcat(char *str1, char *str2);
char	*mystrncat(char *str1, char *str2, int n);
char	*my_strstr(char *str, char to_find);
char	*my_strdup(char *str);


#endif
