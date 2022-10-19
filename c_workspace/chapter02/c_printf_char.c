#include <stdio.h>

/**
 * vs code 단축키
 * Shitf + Alt + N : C 실행
 * Shitf + Alt + ↓ or ↑ : Line 복사
 * Alt + ↓ or ↑ : Line 이동
 * Ctrl + x : Line 삭제
 * Ctrl + space : 자동완성
*/

// '':문자(charachter) 'A', 'c', '!'
//"" :문자열(string) "A", "ABC", "A!"

// ※ 문자('')를 사용하는 경우
//   + 키보드 제어를 할때 사용

int main(void)
{
    /* code */
    printf("%c\n", 'A'); 
    printf("%c\n", "A"); 
    printf("%c은 %s입니다\n", '1', "first"); 
    return 0;
}
