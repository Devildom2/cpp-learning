#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a[6];

  // 乱数の初期化
  srand((unsigned)time(NULL));

  unsigned int cnt = 0;
  for (; cnt < sizeof(a) / sizeof(a[0]); cnt++)
  {
    //    １から１０までの乱数を発生させる
    a[cnt] = rand() % 10 + 1;
    printf("a[%d] = %d ", cnt, a[cnt]);
  }

  //    計算結果を出力
  printf("\n");
}