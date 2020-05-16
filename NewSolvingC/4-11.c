/*
  読み込んだ正の整数値の個数だけ*を縦に連続して表示
*/

#include <stdio.h>

int main(void){
  int no;
  
  printf("正の整数："); scanf("%d",&no);
  
  while(no-- > 0)
    puts("*");
  
  return 0;
}