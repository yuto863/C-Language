#include <stdio.h>

int g;

void func(void){
  int b;
  b = 99;
  printf("func b=%d g=%d\n",b,g);
}

int main(void){
  int a;
  a = 10;
  g = 20;
  printf("main a=%d g=%d\n",a,g);
  func();
  
  return 0;
}