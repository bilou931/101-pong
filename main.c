/*
** main.c for main.c in /home/vatout_a/taff/101 pong
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Thu Nov  5 10:44:15 2015 Vatoutine Artem
** Last update Thu Nov 12 12:08:26 2015 Sébastien Beheretche
*/

#include "variables.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int	check(char *src)
{
  int	z;

  z = 0;
  while (src[z] != '\0')
    {
      if (src[z] >= '0' && src[z] <= '9' || src[z] == '.' || src[z] == '-')
	{
	  z ++;
	  if (src[z] == '\0')
	    return (1);
	}
      else
	return (0);
    }
  return (0);
}

int	main(int ac, char **av)
{
  int	z;
  unsigned int	n;

  z = 1;
  if (ac == 8)
    {
      t_point	tmp1;
      t_point	tmp2;
      while (z != ac)
	{
	  if (check(av[z]) == 1)
	    z ++;
	  else 
	    exit(84);
	}
      tmp1.x = atof(av[1]);
      tmp1.y = atof(av[2]);
      tmp1.z = atof(av[3]);
      tmp2.x = atof(av[4]);
      tmp2.y = atof(av[5]);
      tmp2.z = atof(av[6]);
      if (av[7][0] == '-')
	exit(84);
      else
	n = atoi(av[7]);
      pong101(tmp1, tmp2, n);
    }
  else
    exit(84);
}
