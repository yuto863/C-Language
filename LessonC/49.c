#include <stdio.h>


struct person{
  char *name;
  int age;
}

struct person disp(struct person p){
  p.age = 33;
  printf("%s\n",p.name);
  
}

int main(){
  struct person Tanaka = ["Tanaka",44];
  struct person Suzuki;
  
  disp(Tanaka);
  
  Suzuki = disp(Tanaka);
  printf("%s\n",Suzuki.age);
  
  return 0;
  
}