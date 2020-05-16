#include <stdio.h>

int add(int a,int b){
  return a + b;
}

void p_add(int *ans,int a,int b){
  *ans = a + b;
}


int main(){
  int a = 20;
  int b = 30;
  int ans;
  
  add(a,b);
  p_add(&ans,a,b);
  
  printf("%d",ans);