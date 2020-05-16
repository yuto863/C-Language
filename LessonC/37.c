#include <stdio.h>

int main(){
  int arry[] = {3,45,2,3,56,43,2221};
  int *p_arry;
  
  p_arry = arry;
  
  printf("%d\n",*(p_arry + 5)); //p_arryは0番目のポインタを指す
  
  return 0;
}