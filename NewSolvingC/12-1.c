#include <stdio.h>

#define NAME_LEN 64

struct student{
  char name[NAME_LEN];
  int height;
  float weight;
  long schols;
};

int main(void){
  struct student takao = {"Takao",173,86.2};
  
  printf("名  前 = %s  %p\n",takao.name,&takao.name);
  printf("身  長 = %d %p\n",takao.height,&takao.height);
  printf("体  重 = %.1f %p\n",takao.weight,&takao.weight);
  printf("奨学金 = %ld %p\n",takao.schols,&takao.schols);
  
  return 0;
}