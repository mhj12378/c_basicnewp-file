/**
 * if문(제어문) 기본문법
 * 
 * if(조건) {
 * 실행문
 * }else if(조건) {
 * 실행문
 * }else if(조건) {
 * 실행문
 * }else if(조건) {
 * 실행문
 * }else  {
 * 실행문
 * }
 * 
 * 조합 방법
 * 1. if() 단독
 * 1. if()~else
 * 1. if()~else if()
 * 1. if()~else if()~else
 * 
 * ※ if문은 반드시 if로 시작
 * ※ else if()와 else는 필수아님
 * ※ if와 else는 1번만 사용가능(chain안에서)
 * ※else if() 여러번 사용가능
 * ※ if 문에서 체인으로 연결된 경우 위에서 부터
 *     참(true)인 값 하나만 실행하고 빠져나감
 * 
 *   
 * # 조건문 2개 (각각 따로 실행) - 남자에서 참이여도 (여자) 실행
 * if (남자이면){
 *    출력(남자);
 * }             
 * 
 * if (여자이면){
 *   출력(여자);
 * }                           
*/

#include <stdio.h>

int main (void){
    int a = 20;
    int b = 0;
    //조건을 보고 
    // 참(true) 블룩문 안에 있는 코드 실행
    //거짓(fasle) 다음으로 넘어감
    if(a > 30) {
        printf("a가 30보다 커요!");
    }
}
