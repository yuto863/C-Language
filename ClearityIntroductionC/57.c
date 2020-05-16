#include <stdio.h>

void strout(char s[]){
  int i;
  printf("s=%s\n",s);
  for(i=0;s[i] != '\0';i++)
    printf("%X",s[i]);
  printf("\n");
}

int main(void){
  char st[]="ABCD";
  strout(st);
  strout("abcd");
  return 0;
  
}