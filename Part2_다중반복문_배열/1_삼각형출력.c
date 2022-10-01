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
  

/*
문제 : n층의 삼각형을 출력하는 프로그램을 작성하여라.
입력 : 첫째 줄에 정수n이 주어진다. (0≤n≤100)
출력 : 다음 예제와 같이 삼각형 모양으로 ‘*’을 출력한다.(공백의 개수와 별의 개수를 정확하게 확인해주시바랍니다.)
  *
 ***
*****
*/
  int n;
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++){
    for (int j=n-1; j>=i; j--){
      printf(" ");
    }
    for (int j=1; j<=2*i-1; j++){
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}
