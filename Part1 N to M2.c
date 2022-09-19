/*
문제 - N부터 M까지 출력하는 프로그램을 작성해보자.
입력 - 첫째 줄에 자연수 N과 자연수 M이 공백을 가지고 주어진다. (N ≤ M ≤ 1,000)
출력 - 첫째 줄에 N부터 M까지의 자연수를 공백을 사이에 두고 차례대로 출력한다. (단, 한 줄에 최대 8개씩 출력해야 한다.)
*/
#include <stdio.h>

int main() {

  int n, m;
  int count=0;
  scanf("%d %d", &n, &m);
  
  for (int i=n; i<=m; i++){
    if (count%8 == 0 && count != 0){
      printf("\n");
    }
    printf("%d ", i);
    count++;
  }
  return 0;
}
