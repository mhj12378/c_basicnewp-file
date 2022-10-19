#include <stdio.h> //9.28일 폰 노이만의 내장방식 

//scant() 함수
//   +키보드로부터 값을 입력

// c언어는 메모리 공간위치 관리가 필요

int main(void)
{
    int age =4;

    //age 호출=> 4값 /
    printf("%d\n", age); //age 4

    printf("나이: ");
    scanf("%d", &age); //age 변수의 메모리 주소

    printf("%d", age); //age 4

    return 0;
}
