#include <stdio.h>
#include <string.h>

char *bigstr(char *s1,char *s2){
  if(strcmp(s1,s2) > 0)
    return s1;
  else
    return s2;
}

int main(void){
  char *p;
  p = bigstr("aaa","bbb");
  printf("%s\n",p);
  return 0;
}