#include <stdio.h>


int main(){
  int a;
  int *p_a;
  int **pp_a;

  
  a = 200;
  p_a = &a;
  pp_a = &p_a;
  
  *p_a = 300;
  
  printf("%d\n",p_a);
  printf("%d\n",*p_a);
  printf("%d\n",a); //実データも変わる
  printf("%d\n",*(&a)); //&でアドレスにアクセスし、*で再び実データにアクセスしている
  printf("%d\n",*pp_a);
  return 0;
}