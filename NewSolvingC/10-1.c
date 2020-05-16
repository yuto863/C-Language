// 受け取った整数を０〜１００に収まるように調整する

#include <stdio.h>

void adjust_point(int *n){
  if(*n < 0) *n = 0;
  if(*n > 100) *n = 100;
  
}

int main(void){
  int point;
  
  printf("テストの点数：");
  scanf("%d",&point);
  adjust_point(&point);
  
  printf("点数は%d点です。\n",point);
  
  return 0;
  
}