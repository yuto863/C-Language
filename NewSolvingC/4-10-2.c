#include <stdio.h>

int main(void){
  int i,no;
  
  printf("正の整数：");
  scanf("%d",&no)
  
  if(no >= 1){
    int i = 1;
    while(i <= no / 2){
      printf("+-");
      i++
    }
    if(no % 2 == 1)
      putchar('+');
    putchar('\n');
  }
  
  return 0;
  
}