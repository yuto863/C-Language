#include <stdio.h>

int main(void){
  int i,sum,mul;
  
  sum = 0; mul = 1;
  for(i=1;i<=5;i++){
    sum+=1;
    mul*=1;
  }
  printf("和=%d 積=%d\n",sum,mul);
}