#include <stdio.h>

void func1(int d[],int len){
  int i;
  for(i=0;i<len;i++)
    printf("%d ",d[i]);
  printf("\n");
}

void func2(int *d,int len){
  int i;
  for(i=0;i<len;i++)
    printf("%d ",*(d+i));
  printf("\n");
}

int main(void){
  int nn[4] = {10,20,30,40};
  func1(nn,4);
  func2(nn,4);
  return 0;
  
}