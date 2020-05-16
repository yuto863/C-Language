/*
  整数の３乗値を求める
*/

#include <stdio.h>

/*--- xの３乗値を返す ---*/

int cube(int x){
  return x * x * x;
}

int main(void){
  int n;
  
  printf("整数値：");
  scanf("%d",&n);
  
  printf("%dの３条値は%dです。\n",n,cube(n));
  
  return 0;
  
}