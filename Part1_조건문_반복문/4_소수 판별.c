/*
문제 - 자연수n이 주어질 때, n 이 소수인지 판별하는 프로그램을 작성하여라. 여기서 소수란, 약수가 1과 자기자신밖에 존재하지 않는 수를 말한다.
입력 - 첫째 줄에 자연수 n이 주어진다. (2≤n≤20,000)
출력 - 첫째 줄에 n이 소수이면 YES, 소수가 아니면 NO를 출력한다.
*/
#include <stdio.h>

int main() {
  
  int n;
  scanf("%d", &n);
  
  int flag = 0;
  for(int i=2; i<n; i++){
    if(n%i == 0){
      flag = 1;
      break;
    }
  }
  
  if(flag == 0){
    printf("YES\n");
  }
  else printf("No\n");
  return 0;
  
  /*
  for(int i=2; i<=n-1; i++){
    if(n%i == 0){
      printf("No\n");
      flag = 1;
      break;
    }
  }
  
  if(flag == 0){
    printf("YES\n");
  }
  */
}


/*
파이썬
n = int(input())
a = "YES"
for i in range(2, n):
  if(n%i == 0):
    a = "NO"
    break

print(a)
*/
