/*
  読み込んだ二つの整数値は等しいか
*/

#include <stdio.h>

int main(void){
  int a,b,diff;
  
  puts("二つの整数を入力してください。");
  printf("整数A："); scanf("%d",&a);
  printf("整数B："); scanf("%d",&b);
  
  if(a == b)
    puts("二つの値は同じです。");
  else {
    int min,max;
    
    if(a < b){
      min = a;
      max = b;
    } else {
      min = b;
      max = a;
    }
    
    printf("小さいほうの値は%dです。\n",min);
    printf("大きいほうの値は%dです。\n",max);
    
  }
  
}