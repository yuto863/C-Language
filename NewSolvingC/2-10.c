/*
  読み込んだ二つの整数値の比率を百分率（実数）で表示
*/

#include <stdio.h>

int main(void){
  int a,b;
  
  puts("二つの整数を入力してください。");
  printf("整数a:"); scanf("%d", &a);
  printf("整数b:"); scanf("%d", &b);
  
  printf("aの値はbの%f%%です。\n",(double)a / b * 100);
  
  return 0;
  
}