#include <stdio.h>
#include <string.h>

int main(void){
  
  char s[10];
  
  strcpy(s,"abcdef");
  printf("[%s]\n",s);
  
  s[3] = '\0';
  printf("[%s]\n",s);
  
  s[3] = 'X';
  printf("[%s]\n",s);
  
  s[0] = '\0';
  printf("[%s]\n",s);
  
  return 0;
  
}