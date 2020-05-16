/*
  読み込んだ二つの整数値の大小関係を表示
*/

#include <stdio.h>

int main(void){
  int a,b;
  
  puts("二つの整数を入力してください。");
  printf("整数A：");  scanf("%d",&a);
  printf("整数B：");  scanf("%d",&b);
  
  if(a == b)
    puts("AとBは等しいです。");
  else if(a > b)
    puts("AはBより大きいです。");
  else
    puts("AはBより小さいです。");
  
  return 0;  
}