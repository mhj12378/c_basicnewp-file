#include <stdio.h> //라이브러리

// 정수와 실수 출력
//  + 정수(%d), 실수(%1f), 문자(%c), 문자열(%s) 등
//   decimal,   long  float, character, string (chapter-3에서)

// 정수: 0, 10 ,-1 
// 실수: 0.0, 10.2, -5.5
// 문자: 'A', 'C'
// 문자열: "APPLE", "Banana"
int main(void)
{
    printf("%d\n", 10);         //%d 위치에 10출력
    printf("%1f\n", 3.4);       //%1f 우치ㅣ에 3.4를 소수점 이하 6자리까지 출력
    printf("%.1lf\n", 3.45");   //소수점 이하 첫재자리까지 출력(돌째 자리에서 반올림)
    printf("%.10lf\n", 3.4");   //소수저 이하 10자리까지 출력

    printf("%d과 %d의 힘은 %d입니다.\n", 10, 20, 10 +20);
    printf("%.11f -%.11f = %.11f\n", 3.4, 1.2, 3.4 = 1.2);

    return 0;
}
