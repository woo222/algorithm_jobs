#include <stdio.h>

int main() {
  
/*
* 1. 다중 반복문
* nXn 별 그리기
*/
  int n;
  scanf("%d", &n);
  
  for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
      printf("*");
    }
    printf("\n");
  }
  

/*
* 2. 배열
* 배열에 값을 입력하고 출력하기
*/
  int n;
  int data[100];
  
  scanf("%d", &n);
  
  for(int i=0; i<n; i++) {
    scanf("%d", &data[i]);
  }
  
  for(int i=0; i<n; i++){
    printf("%d ", data[i]);
  }
  
  // 최댓값 구하기
  int n;
  int data[100];
  
  scanf("%d", &n);
  
  for (int i=0; i<n; i++){
    scanf("%d", &data[i]);
  }
  
  int myMax = data[0];
  
  for (int i=1; i<n; i++){
    if (myMax < data[i]){
      myMax = data[i];
    }
  }
  
  printf("%d", myMax);
  
  return 0;
}
