// 1から100までの総和を表示するプログラムをfor文、while文、do-while文で記述してください

#include <stdio.h>

int main(void){
  int i,sum;
  
  sum=0;
  for(i=1;i<=100;i++){
    sum=sum+1;
  }
  printf("sum=%d\n",sum);
}