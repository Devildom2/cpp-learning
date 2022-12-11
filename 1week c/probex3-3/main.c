#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  unsigned char value;
  printf("Input Number(0-255):");
  scanf("%d", &value);
  printf("input:%d\n", value);

  unsigned int cnt = 0;
  for (; cnt < 8; cnt++)
  {
    printf("%d", ( (char)(value << cnt) & 0x80) == 0 ? 0 : 1);
  }

  //    計算結果を出力
  printf("\n");
}