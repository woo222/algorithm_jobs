/*
* 1. 다중 반복문
* nXn 별 그리기
*/
#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
