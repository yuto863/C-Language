#include <stdio.h>

struct person{
  char *name;
  int age;
};


int main(){
  struct person managers[2];
  
  managers[0].name = "Tanaka";
  managers[0].age = 33;
  managers[1].name = "Yamada";
  managers[1].age =21;
  
  printf("%s\n",managers[1].name);
  
  return 0;
}