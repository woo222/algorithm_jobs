/*
문제 : n층의 삼각형을 출력하는 프로그램을 작성하여라.
입력 : 첫째 줄에 정수n이 주어진다. (0≤n≤100)
출력 :
*
**
***
*/
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  for (int i=1; i<=n; i++){
    for (int j=0; j<i; j++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
