/*
  読み込んだ三つの整数値の最小を求めて表示
*/

#include <stdio.h>

  int main(void){
  int n1,n2,n3,min;
  
  puts("三つの整数を入力してください。");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  printf("整数３："); scanf("%d",&n3);
  
  min = n1;
  if(n2 < min) min = n2;
  if(n3 < min) min = n3;
  
  printf("最小値は%dです。\n",min);
  
  return 0;
  
  
}