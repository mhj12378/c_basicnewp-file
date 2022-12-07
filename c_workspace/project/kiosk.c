#include <stdio.h>
#include <string.h>

//메뉴표 생성(전역)
char *burger_name[3] = {"빅맥", "통새우와퍼", "싸이버거"};
char *side_name[3]   = {"맥너겟", "치즈스틱", "오징어링"};
char *drink_name[3]  = {"코카콜라", "제로콜라", "스프라이트"};

// 가격표 생성(전역)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// 고객 주문 기록 저장 (전역)
char *menu_save[3] = {}; // 주문 메뉴
int price_save[3] = {};  // 주문 가격

int main (void) {
    

//printf()
//scanf("%d", &menu_num);
int menu_num = 0;
put(" ■ 원하시는 메뉴번호를 선택하세요");
while(1) { // 1. true, 0:false
        printf(">> 번호:");
        scanf("%d", &menu_num);
        if (menu_num < 1 || menu_num > 4){ // 1~4 out        -다 올바른 방법
            break;
        }else {
            puts("warling: 1~4의 번호를 입력해주세요");
        }
        // 1~4 in 번호 → 넘어감 (break)
    }


// 작성해보세요~
// 1~4 사이의 값이 들어오면 그냥 넘어감
// 1~4 이외의 값이 들어오면 "올바른 값을 입력해주세요" 출력
//    if(menu_num >= 1 && menu_num <=4) {
//    } else {
//       puts("warling: 1~4의 번호를 입력해주세요")
//    }

    // 3.세부메뉴 출력(1~4 in)
    int choice_num; // 사용자가 선택한 세부 메뉴번호 저장
    if(menu_num == 1) {              //햄버거 세트
    
    } else if(menu_num =  2){        //햄버거
        put("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("== Burger Menu ==");
        for (int i=0; i<3; i++ ){
            printf("□□ %d.%s \n", i+1, burger_name[i]);
        }
        //puts("□□ 1. 빅맥(5900원)");
        //puts("□□ 2. 통새우와퍼 (5500원)");
        //puts("□□ 3. 싸이버거(4300원)");
        put("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");

    } else if(menu_num =  3){        //사이드
        
    } else if(menu_num =  4){        //드링크     
    
    }

    
    // 메인메뉴 함수



}