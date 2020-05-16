#include <stdio.h>
#include <ctype.h>

int main(void){
  char s[10] = "ABCD";
  char *p;
  
  p = s;
  
  printf("s=%s\n",s);
  printf("p=%s\n",p);
  
  while(*p != '\0'){
    *p = tolower(*p); //配列の１文字目を入れていく
    ++p;
  }
  
  p = s;
  printf("s=%s\n",s);
  printf("p=%s\n",p);
  
  return 0;
}