// うるう年である年号を書く

#include <stdio.h>

int main(void){
  
  int n;
  
  for(n=2000;n<=2200;n++){
    if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
      printf("%d ",n);
  }
  printf("\n");
  
  return 0;
}