/*
문제 - 1부터 N까지의 숫자 중 짝수의 합을 구하는 프로그램을 작성하여라.
입력 - 첫째 줄에 N이 주어진다. (1 <= N <= 2000)
출력 - 1부터 N까지의 숫자 중 짝수의 합을 출력한다.
*/
#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);
  
  int sum=0;
  
  for (int i=1; i<=n; i++){
    if(i%2==0){
      sum += i;
    }
  }
  
  printf("%d\n", sum);

  return 0;
}
