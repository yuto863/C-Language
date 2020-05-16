// 日付を前日あるいは翌日に更新する  

#include <stdio.h>

int is_leap(int y){
  return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

