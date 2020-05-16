/*
  1からnまでの和を求める
*/

#include <stdio.h>

int main(void){
  int i;
  int sum = 0;
  int n;
  
  printf("nの値：");
  scanf("%d",&n);
  
  for(i = 1; i<=n; i++)
    sum += 1;
  
  printf("1から%dまでの和は%dです。\n",n,sum);
  
  return 0;
}