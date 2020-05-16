/*
  読み込んだ二つの整数値の平均値の符号を反転させた値を表示
*/

#include <stdio.h>

int main(void){
  int x,y;
  int ave;
  
  puts("二つの整数を入力してください。");
  printf("整数x：");  scanf("%d", &x);
  printf("整数y：");  scanf("%d", &y);
  
  ave = (x + y) / 2;
  
  printf("平均値の符号を反転した値は%dです。\n" ,-ave);
  
  return 0;
}