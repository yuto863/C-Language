#include <stdio.h>


int main(){
  int a;
  int *p_a;
  
  a = 200;
  p_a = &a;
  
  printf("%d\n",p_a);
  printf("%d\n",*p_a);
  
  return 0;
}