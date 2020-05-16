#include <stdio.h>

struct person{
  char *name;
  int age;
};


int main(){
  struct person Tanaka,Yamada;
  
  Tanaka.name = "Tanaka";
  Tanaka.age = 23;
  
  Yamada = Tanaka;
  
  printf("%s\n",Yamada.name);
  
  Yamada.name = "Yamada";
  printf("%s\n",Yamada.name);
  printf("%s\n",Tanaka.name);   //コピー元の田中には影響はない
  return 0;
}