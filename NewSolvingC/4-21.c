/*
  読み込んだ面接をもつ長方形の辺の長さを列挙
*/

#include <stdio.h>

int main(void){
  int area;
  int tate;
  
  printf("面積：");
  scanf("%d", &area);
  
  for(tate = 1; tate < area; tate++){
    if(tate * tate > area)break;
    if(area % tate != 0) continue;
    printf("%d　×　%d\n",tate, area / tate);
    
  }
  
  return 0;
  
}