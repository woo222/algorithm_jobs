/*
문제 - 정수 N을 입력받고, N이 짝수인지 아닌지 판별하는 프로그램을 작성해보자. (단, if문과 else문 모두 사용)
입력 - 자연수 N
출력 - N이 짝수라면 “even”, N이 짝수가 아니라면 “not even"
*/
#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  
  if (n%2 == 0){
    printf("even\n");
  }
  else{
    printf("not even\n");
  }

  return 0;
}
