/*
  読み込んだ整数の個数だけ1234567890を繰り返し表示
*/

#include <stdio.h>

int main(void){
  int i,no;
  
  printf("正の整数を入力してください：");
  scanf("%d",&no);
  
  for(i = 1; i <= no; i++)
    printf("%d",i % 10);
  putchar('\n');
  
  return 0;
}