/*
** my_putstr.c for my_putstr in /home/yoann/piscine_v2/FDI-DEVC-008/jour03/poli_y/my_putstr
** 
** Made by POLI Yoann
** Login   <poli_y@etna-alternance.net>
** 
** Started on  Wed Oct 21 08:44:36 2015 POLI Yoann
** Last update Wed Dec 16 22:14:45 2015 HUSSAIN Faisal
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  if (*str != '\0')
    {
      my_putchar(*str);
      my_putstr(str + 1);
    }
}

void	my_putstr_clr(char *str, char *custom)
{
  my_putstr(custom);
  my_putstr(str);
  my_putstr("\e[0m");
}
