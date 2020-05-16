/*
  読み込んだ整数の個数だけ５個ごとに改行しながら'*'を表示'
*/

#include <stdio.h>

int main(void){
  int no;
  
  printf("何個*を表示しますか：");
  scanf("%d", &no);
  
  if(no > 0){
    int i;
    int rem = no % 5;
    
    for(i = 0; i < no / 5; i++)
      puts("*****");
    if(rem > 0){
      for(i = 0; i < rem; i++)
        putchar('*');
      putchar('\n');
    }
    
  }
  
  return 0;
  
}