#include <stdio.h>

void func(int n){
  int a = 0;
  static int s = 0;
  
  a = a + n;
  s = s + n;
  printf("a=%d s=%d\n",a,s);
}

int main(void){
  int i;
  for(i=1; i<=5; i++)
    func(i);
  
  return 0;
}