/*
  読み込んだ二つの整数値の積を変換して格納して表示
*/

#include <stdio.h>

int main(void){
  int n1,n2;
  int seki; /*  積  */
  
  puts ("二つの整数を入力してください。");
  printf("整数１："); scanf("%d",&n1);
  printf("整数２："); scanf("%d",&n2);
  
  seki = n1 * n2;
  
  printf("それらの積は%dです。\n", seki);
  
  return 0;
}

/*
変数sekiを導入しない場合

int n1,n2;

puts ("二つの整数を入力してください。");
printf("整数１："); scanf("%d",&n1);
printf("整数２："); scanf("%d",&n2);

printf("それらの積は%dです。\n",n1 * n2);

*/