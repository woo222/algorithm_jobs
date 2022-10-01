/*
문제 - 3 개의 정수가 주어질 때, 이 중 최댓값을 찾는 프로그램을 작성하여라.
입력 - 첫째 줄에 3개의 정수a,b,c 가 주어진다. (0≤a,b,c≤10,000)
출력 - 첫째 줄에 a,b,c 중 최댓값을 출력한다.
*/
#include <stdio.h>

int main() {
  
  int a, b, c;
  int max;
  scanf("%d %d %d", &a, &b, &c);
  
  max = a;
  if (max<=b){
    max = b;
  }
  if(max <= c){
    max = c;
  }
  
  printf("%d", max);
  return 0;
}
