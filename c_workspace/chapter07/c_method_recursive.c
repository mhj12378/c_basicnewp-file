#include <stdio.h>


/**
 *  재귀함수(recursove function)
 *   - 자기 자신을 호출하는 함수
 *   - return(반환값) → 다시 자기 자신을 호출하는 함수를 사용
*/

void fruit(void);

int main (void) {
    fruit();
}

// 무한 반복 호출하는 재귀함수
// - 절대 사용 금지!
// - Fatal Error;

void fruit(void) {
    printf("apple\n");
    fruit();
}