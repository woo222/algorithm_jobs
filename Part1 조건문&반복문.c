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
  
  // 캐스팅
  int sum = 1+2+3+4+5+6+7+8+9+10;
  double average = (double)sum / 10; // 정수인 sum을 잠시 실수로 변경 -> 캐스팅
  // double average = sum / 10.0;
  
  // 55 / 10 --> 5 정수와 정수 연산은 결과도 정수이다.
  // 실수와 정수 사이 연산은 결과가 실수이다.
  
  printf("%lf\n", average); // 실수 하나 출력 lf
  
  
  return 0; // 프로그램 정상종료
}
