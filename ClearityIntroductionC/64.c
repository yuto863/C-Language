#include <stdio.h>

int main(void){
  
  int ary[3]={100,110,120};
  int *pt;
  
  pt =ary;
  printf("アドレス=%p 値=%d\n",pt,*pt);
  
  pt = &ary[0];
  printf("アドレス=%p 値=%d\n",pt,*pt);
  
  pt = &ary[1];
  printf("アドレス=%p 値=%d\n",pt,*pt);
  return 0;
}