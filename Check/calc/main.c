#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a = 10;
  float b = 0.0;
  float c = 0.0; 

  b  =  a / 4;
  c  =  a / 4 + 0.05;

  printf("%d / 4 : %f \n", a, b  );
  printf("%d / 4 + 0.05 : %f \n", a, c );

  b  =  a * 0.25;
  c  =  a * 0.25 + 0.05;

  printf("%d * 0.25 : %f \n", a, b);
  printf("%d * 0.25 + 0.05 : %f \n", a, c );

  b  =  (float)a / 4;
  c  =  (float)a / 4 + 0.05;

  printf("(float)%d / 4 : %f \n", a, b  );
  printf("(float)%d / 4 + 0.05 : %f \n", a, c);
}