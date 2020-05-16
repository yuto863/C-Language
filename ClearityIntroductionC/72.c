#include <stdio.h>

enum RetType {YES,NO,CANCEL};

int main(void){
  enum RetType ret;
  
  ret = YES;
  if(ret == YES)
    printf("retはYESです\n");
  else if(ret == NO)
    printf("retはNOです\n");
  else if("retはCANCELです/n");
  printf("%d %d %d\n",YES,NO,CANCEL);
  
  return 0;
  
}