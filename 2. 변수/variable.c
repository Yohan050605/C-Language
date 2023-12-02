#include <stdio.h>

int main()
{
  // int num1, num2, num3; 으로도 선언 가능합니다.
  int num1;
  int num2;
  int num3;

  // int num1 = 5; 처럼 변수를 선언하는 동시에 초기화가 가능합니다.
  num1 = 5;
  num2 = 10;
  num3 = 15;

  printf("%d %d %d\n", num1, num2, num3);

  return 0;
}

// 출력값
// 5 10 15
