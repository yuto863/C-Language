#include <stdio.h>

void strout(char s[]){
  int i;
  printf("%s\n",s);
  for(i=0;s[i] != '\0';i++);
    printf("%X ",s[i]);
  printf("\n");
}

void strout_p(char *p){
  printf("%s\n",p);
  while(*p){
    printf("%X ",*p);
    ++p;
  }
  printf("\n");
}

int main(void){
  char st[] = "ABCD";
  strout(st);
  strout_p(st);
  
  return 0;
}