#include <stdio.h>

struct person{
  char *name;
  int age;
};

typedef struct{
  char *name;
  int age;
}Person2;


int main(){
  struct person Tanaka; //ローカル変数
  
  Tanaka.name = "Tanaka";
  Tanaka.age = 23;
  
  Person2 Yamada;
  
  Yamada.name = "Yamada";
  Yamada.age = 44;
  
  printf("%s\n",Tanaka.name);
  printf("%s\n",Yamada.name);
  
  return 0;
}