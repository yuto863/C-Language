#include <stdio.h>

int main(){
  char str[] = "Hello World";
  char *p_str;
  
  p_str = str;
  
  printf("%s\n",p_str);
  printf("%p\n",p_str);
  printf("%p\n",str);
  
  return 0;
  
}