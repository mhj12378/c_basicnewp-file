// unsigned 정수 자료형
//  +정수형은 양수 ~음수 까지 모두 표현
//  + ex) int: -2147483647~2147483647 
//  + 양수만 저장하면 2배 넚은 변위 사용 가능 
//  + 나위와 같이 음수가 없는 데이터는 unsigned 사용
//  + 자료형 앞에 unsigned 만 붙이면 됨
//  + 기본값(defaulf)은 signed 

#include <stdio.h>

int main(void)
{
    int a; //signed:음수~양수
    unsigned int b; // unsigned:양수 x 2
    return 0;
}
