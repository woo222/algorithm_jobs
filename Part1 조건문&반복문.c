#include <stdio.h>

int main() {
  // 1.출력
  printf("Hello world!"); // printf - 출력
  printf("My name is blahblahblah.\n"); // \n - 엔터
  
  
  // 2.변수
  int a = 1;
  int b = 3;
  int c = 5;
  
  printf("%d %d %d\n", a, b, c); // 변수 출력
  
  // 사칙연산
  int first, second;
  
  first = 4;
  second = 2;
  
  printf("%d + %d : %d\n", first, second, first+second);
  printf("%d - %d : %d\n", first, second, first-second);
  printf("%d * %d : %d\n", first, second, first*second);
  printf("%d / %d : %d\n", first, second, first/second);
  printf("%d %% %d : %d\n", first, second, first%second); // 나머지, %를 출력하려면 %%
  
  
  
  return 0; // 프로그램 정상종료
}
