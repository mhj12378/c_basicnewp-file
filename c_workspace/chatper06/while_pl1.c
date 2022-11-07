#include <stdio.h>

int main (void) {
    int total = 0	
    for(int i=1; i<=100; i++){
        total += i;
    }
 //1~100±îÁö ÃÑÇÕµ¡¼À(while)
    int num = 1;
    while(num <=100){
    total += num;
    num++;
    }
    printf("ÃÑÇÕ: %d\n, total" );
}
//1~100±îÁö ÃÑÇÕ µ¡¼À(for)
