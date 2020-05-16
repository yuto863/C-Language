/*
  整数型の表現範囲を表示
*/
#include <stdio.h>
#include <limits.h>

int main(void){
  puts("本環境での各整数型の値の範囲");
  printf("signed short int:%d～%d\n",SHRT_MIN,SHRT_MAX);
  printf("signed int:%d～%d\n",INT_MIN,INT_MAX);
  printf("signed long int:%ld～%d\n",LONG_MIN,LONG_MAX);
  
  return 0;
  
}