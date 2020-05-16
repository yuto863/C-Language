#include <stdio.h>

int main(void){
  
  int i = 1;
  while(i < 1000){
    printf("%d ",i);
    i = i * 2;
  }
  printf("\n");
  
  return 0;
}