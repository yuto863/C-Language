#include <stdio.h>


void func(int a){
  if(a > 0){
    printf("%d\n",a);
    func(--a); //a--だと無限ループに至る
  }
}

int main(){
  
  func(10);
  
  return 0;
}