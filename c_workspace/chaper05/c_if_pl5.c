#include <stdio.h>

int main (void) {
    int num1 = 20, num2 = 10, num3 = 50;
    int temp;

    //변수 3개에 각각 다른 값을 담음
    //  - 문제: num1 과 num2 에 값을 바꿔(change)
    
    //코드 ---
        // 체인지 코드 작성!!
    //코드 ---
    temp = num1;
    num1 = num2;
    num2 = temp;

    if (num1 < num2) {
        temp = num1; 
        num1 = num2; 
        num2 = temp;
    } 
    if (num1 < num3) {  //swap
        temp = num1;    //else if 하나 실행되면 그다음 실행x 그래서 조건 3개로 if문으로 해야함
        num1 = num3; 
        num3 = temp;
    } 
    if (num2 < num3) {
        temp = num2;
        num2 = num3; 
        num3 = temp;
    }
    //printf("num1: %d", num1); // 10
    //printf("num2: %d", num2); // 20
    //-정렬하려고
    printf("%d > %d > %d", num1, num2, num3);

    //정렬: num1 > num2 > num3
    //조건1:num1 < num2 ->값 교환   :  num1 > num2
    //조건2:nun1 < num3 ->값 교환   :  num1 > num2,num3
    //조건3:num2 < num3 ->값 교환   :  num2 > num3
    // -> num1 > num2 > num3  
}