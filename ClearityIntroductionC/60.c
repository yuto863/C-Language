#include <stdio.h>

int main(void){
  
  int *pt;
  int mydt = 1234,idt;
  
  pt = &mydt;
  idt = *pt;
  printf("値mydt=%d\n",mydt);
  printf("値*pt =%d\n",*pt);
  printf("値idt =%d\n",idt);
  
  mydt = 555;
  printf("値mydt=%d\n",mydt);
  printf("値*pt =%d\n",*pt);
  
  *pt = 666;
  printf("値mydt=%d\n",mydt);
  printf("値*pt =%d\n",*pt);
  
  return 0;
}