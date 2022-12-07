#include <stdio.h>

int main (void) {
    printf("출력:\n");
    int k = 1;
    int p, r;
    printf("%d", k);
    for (int i=1; i<=6; i++) {
        if (i == 1) {
            p = 1;
            printf("%d", p);
        } else if (i<=6) {
            r = k + p;
            printf("%d",r);
            k = p;
            p = r;
        }
    }
}

/**
 * 오늘부터 kiosk 프로그램
 * -햄버거
 * -화면 → 콘솔(console)
 * - 기능제한: 결제 시스템x
 *   햄버거 1개, 사이드1개, 음료 1개
 * 
 * -기능 정의
 *  1. 메뉴 출력기능
 *  2. 소비자 메뉴 선택!
 *  3. 선택한 메뉴 저장
 *  4. 주문 → 현재 결과 출력(총액, 메뉴)
 *  5.validation check(값 올바르게 체크
 *  - 1~5번 7벌)                                부수적인 부분 Error
*/