#include <stdio.h>
#include <string.h>

int main(){
  char *p_str = "Hello world";
  char *p_str2;
  
  p_str = "Hi There";
  
  p_str2 = strcat(p_str," Good Morning");
  
  printf("%s\n",p_str);
  printf("%d文字です\n",strlen(p_str));
  printf("%s\n",p_str2);
  
  return 0;
  
}

//セグフォが起こる