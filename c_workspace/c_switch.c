#include <stdio.h>
//제어문
// 1. if~else if~else
// 2. swich~case~default

/**
 * 여러 개의 상수 중 조건에 해당하는 하나만 골라서 실행
 * 
 * - 규칙
 *   1) 조건식은 정수식만 사용
 *   2) 기본적으로 case는 break 문을 포함(무조건 아님)
 *   3) break가 없는 경우 break 만나기 전까지 모든 case 실행
 *   4) default는 조건에 해당하는 case가 없는 경우 실행
 *   5) default는 생략가능(if문의 else와 비슷)
 *   6) default는 어디든 위치해도 상관없었음, 대부분 맨 하단
 *   7) if 문보다 switch문이 실행속도 빠름 
*/
int main (void) {
    int rank = 2, m = 0;
    
    switch(rank) {
        case 1:
            m = 300;
            break; //break문 없으면 아래로   내려가서 실행
        case 2:
            m = 200;
            break;
        case 3:
            m = 100;
            break;
        default:
            m =10;
            break;
    }
}