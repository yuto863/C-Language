#include <stdio.h>

int main(void){
  int a = 10,b = 20,c;
  
  
  if(a == 10)
    printf("aは10です\n");
    
  if(a == b){
    printf("aとbは等しい\n");
  }else{
    printf("aとbは等しくない\n");
  }
  
  if(b > 100)     c = 1;
  else if(b > 50) c = 2;
  else if(b > 10) c = 3;
  else            c = 9;
  printf("b=%d c=%d\n",b,c);
  return 0;
  
}