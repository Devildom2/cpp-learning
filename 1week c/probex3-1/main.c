#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char str[16];
  printf("Input words:");
  scanf("%s", str);

  unsigned int cnt = 0;
  for (; cnt < sizeof(str) / sizeof(str[0]); cnt++)
  {
    printf("%c", str[cnt] | 0x20);
  }

  //    計算結果を出力
  printf("\n");
}