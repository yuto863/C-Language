/*
  配列の各要素を先頭から順に54321で初期化して表示
*/

#include <stdio.h>

int main(void){
  
  int i;
  int v[5] = {5,4,3,2,1};
  
  for(i = 0; i < 5; i++)
    printf("v[%d] = %d\n",i,v[i]);
  
  return 0;
  
}