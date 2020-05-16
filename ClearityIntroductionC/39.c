#include <stdio.h>

int main(void){
  int n;
  char a[80],b[]="ABCD";
  
  n = -1;
  
  do{
    ++n;
    a[n] = b[n];
  }while(b[n] != '\0');
  
  printf("a=%s b=%s\n",a,b);
  
  return 0;
  
}