#include <stdio.h>
/**
 * 숫자:5자리
 * 예: 57256
*/
int main (void){
    int num = 57256;
    int total = 0;
    // 코드
    int num1;
    num1 = num / 10000;
    int num2;
    num2 = num - num1 * 10000;
    num2 = num2 / 1000;
    int num3;
    num3 = num - (num1 * 10000 + num2 * 1000);
    num3 = num3 / 100;
    int num4;
    num4 = num - (num1 * 10000 + num2 * 1000 +num3 * 100);
    num4 = num4 / 10;
    int num5;
    num5 = num - (num1 * 10000 + num2 * 1000 +num3 * 100 + num4 * 10);
    total = num1 + num2 + num3 +num4 + num5;
    // 5 + 7 + 2 + 5 + 6 = 25 
    printf("총합: %d\n", total);
}