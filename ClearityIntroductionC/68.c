#include <stdio.h>
#include <string.h>

struct Person{
  char name[40];
  int height;
  int weight;
};

void dataout(struct Person ps){
  printf("名前=%s 身長=%d 体重=%d\n",ps.name,ps.height,ps.weight);
}

int main(void){
  struct Person dt,dt2;
  
  strcpy(dt.name,"田中健一");
  dt.height = 180;
  dt.weight = 70;
  
  dt2 = dt;
  dataout(dt2);
  return 0;
}