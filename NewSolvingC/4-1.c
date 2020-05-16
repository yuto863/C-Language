/*
  読み込んだ整数値の符号を判定（好きなだけ繰り返せる）
*/

#include <stdio.h>

int main(void){
  
  int retry;
  
  do {
    int no;
    
    printf("整数を入力してください：");
    scanf("%d",&no);
    
    if(no == 0)
      puts("その数は0です。");
    else if(no > 0)
      puts("その数は正です。");
    else
      puts("その数は負です。");
    
    printf("もう一度？【Yes…0/No…9】：");
    scanf("%d",&retry);
  }while(retry == 0);
  
  return 0;
}