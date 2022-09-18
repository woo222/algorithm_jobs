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
  
  
  // 3. 입력
  // 계산기
  int first, second;
  
  scanf("%d %d", &first, &second);
  
  printf("%d + %d : %d\n", first, second, first+second);
  printf("%d - %d : %d\n", first, second, first-second);
  printf("%d * %d : %d\n", first, second, first*second);
  printf("%d / %d : %.2lf\n", first, second, (double)first/second); // .2lf - 소수점 둘째 자리까지 출력
  printf("%d %% %d : %d\n", first, second, first%second);
  
  
  // 4. 조건문
  // 큰 수 출력
  int first, second;
  scanf("%d %d", &first, &second);
  
  if(first > second) {
    printf("%d\n", first);
  }
  else if (first < second) {
    printf("%d\n", second);
  }
  else {
    printf("same\n");
  }
  
  
  // 5. 반복문
  // while 문
  int cnt = 0;
  
  while(cnt<10) {
    printf("Hello World\n");
    cnt++;
  }
  
  // for 문
  for (int i=0; i<10; i++){
    printf("Hello World\n");
  }
  
  // 1~n 합 구하기
  int n;
  int sum=0;
  
  scanf("%d", &n);
  
  for (int i=1; i<=n; i++){
    printf("i : %d\n", i);
    sum = sum + i;
  }
  
  printf("%d\n", sum);
  
  return 0; // 프로그램 정상종료
}
