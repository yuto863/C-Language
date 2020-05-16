#include <stdio.h>
#include <string.h>

struct Person{
  char name[40];
  int height;
  int weight;
};

int main(void){
  
  struct Person d1,d2;
  struct Person *p = &d2;
  
  strcpy(d1.name,"田中健一");
  d1.height = 180;
  d1.weight = 70;
  
  strcpy(p->name,"鈴木ともみ");
  p->height = 160;
  p->weight = 60;
  
  printf("%s %d %d\n",d1.name,d1.height,d1.weight);
  printf("%s %d %d\n",p->name,p->height,p->weight);
  
  return 0;
}