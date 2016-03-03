/*
** 101pong.c for 101pong in /home/behere_s/rendu/maths/101pong
** 
** Made by Sébastien Beheretche
** Login   <behere_s@epitech.net>
** 
** Started on  Thu Nov  5 11:54:58 2015 Sébastien Beheretche
** Last update Fri Nov 13 18:18:40 2015 Sébastien Beheretche
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./variables.h"

int	pong101(t_point pt1, t_point pt2, int n)
{
  t_vitesse	speed_vec;
  t_point	pos_final;

  speed_vec.x = pt2.x - pt1.x;
  speed_vec.y = pt2.y - pt1.y;
  speed_vec.z = pt2.z - pt1.z;
  display_speed_vec(speed_vec);
  pos_final.x = pt2.x + (n * speed_vec.x);
  pos_final.y = pt2.y + (n * speed_vec.y);
  pos_final.z = pt2.z + (n * speed_vec.z);
  display_final_pos(pos_final, n);
  if (speed_vec.z != 0 && ((-pt2.z)/speed_vec.z) >= 0 && pt2.x != 0)
    {
      calc_angle(speed_vec);
      return (0);
    }
  else
    {
      printf("The ball won't reach the bat.\n");
      return (0);
    }
  exit(84);
}

int	calc_angle(t_vitesse s_vec)
{
  double	angle_rad;
  double	angle;

  angle_rad = acos(s_vec.z/(sqrt(pow(s_vec.x, 2) + pow(s_vec.y, 2) + pow(s_vec.z, 2))));
  angle = 180*(angle_rad - (M_PI/2))/M_PI;
  angle = fabs(angle);
  printf("The incidence angle is :\n");
  printf("%.2f degrees\n", angle);
  return (0);
}

int	display_speed_vec(t_vitesse vec)
{
  printf("The speed vector coordinates are :\n(%.2f;%.2f;%.2f)\n", vec.x, vec.y, vec.z);
  return (0);
}

int	display_final_pos(t_point pos, int n)
{
  printf("At time t+%d, ball coordinates will be :\n", n);
  printf("(%.2f;%.2f;%.2f)\n", pos.x, pos.y, pos.z);
  return (0);
}
