#include <stdio.h>
/**
 *  Break & Continue 문
 *   - 반복문에서 주로 사용
 * 
 *  - #break: 즉시 반복문을 빠져나가라
 *            → 이후로 반복문 실행 X
 * 
 *  - continue: 즉시 다음 반복으로 넘어라가라
 *            → 이후로 반복문 실행 O
 * 
 *
*/   
int main (void){
    for(int i=1; i<=10; i++){
        if(i % 2 == 0){
            continue;
        }
        if(i == 7){ //실수많대 검증 break 바로 부스기 즉 아래실행문 실행X
            break;
        }
        printf("%d\n", i);
    }
    
}