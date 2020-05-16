#include <stdio.h>
int add(int a,int b){
  a += 100;
  return a + b;
}

int add2(int *a,int b){ //aはポインタにアクセスしている
  *a += 100;  //aは実データにアクセスしている
  return *a + b;
}


int main(){
  int a = 20;
  int b = 30;
  
  printf("%d\n",add2(&a,b)); //ポインタ変数を渡している
  printf("%d\n",a);
  
  return 0;
  
}