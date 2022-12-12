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

void print_main_menu(void);
void print_order(void);
int choice_burger(void);
int choice_side(void);
int choice_drink(void);

int main (void) {
    // 1. 메인메뉴 출력
    void print_main_menu();

//printf()
//scanf("%d", &menu_num);
    int menu_num = 0;
    //2.사용자 메인메뉴 입력
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
//                                            int choice_num; // 사용자가 선택한 세부 메뉴번호 저장 -- 삭제
    if(menu_num == 1) {              //햄버거 세트
    
    } else if(menu_num =  2){        //햄버거
        int order_num = choice_burger();

        put("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("== Burger Menu ==");
        for (int i=0; i<3; i++ ){
            printf("□□ %d.%s(%d원) \n", i+1, burger_name[i], burger_price[i]);
        }
        //puts("□□ 1. 빅맥(5900원)");
        //puts("□□ 2. 통새우와퍼 (5500원)");
        //puts("□□ 3. 싸이버거(4300원)");
        put("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        int choice_num;
        while(1){
            printf(">>번호" );
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3){
                break;
            } else {
                puts("warling: 1~4의 번호를 입력해주세요");
            }
        }
        printf("입력 → %d", choice_num);

        // choice_num → 사용자가 선택한 번호
        // 1. 빅맥
        // 2. 통새우 퍼
        // 3. 싸이버거
        // 4. burger_name[] 길이? 3. 인덱스 범위 0~2
        menu_save[0] = burger_name[choice_num-1];
        price_save[0] = burger_price[choice_num-1];
        price_order();

        // 배열길이 동적계산
        // sizeof() :() 안의 바이트 값 계산
        int menu_len = sizeof(menu_num) / sizeof(menu_save[0]);
        int price_len = sizeof(price_save) / sizeof(price_save[0]);

        for(int i=0; i<menu_len; i++) {
            printf("주문[%d]: %s\n", menu_save[i]);
        }
        for(int i=0; i<price_len; i++) {
            printf("가격[%d]: %d\n", i, price_save[i]);
        }
        burger_name[choice_num-1];   //버거 이름
        burger_price[choice_num-1];  //버거 가격
    } else if(menu_num =  3){        //사이드
        
    } else if(menu_num =  4){        //드링크     
    
    }

    
    // 메인메뉴 함수


}


// 1. 햄버거 주문
int choice_burger(void){
    put("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        puts("== Burger Menu ==");
        for (int i=0; i<3; i++ ){
            printf("□□ %d.%s(%d원) \n", i+1, burger_name[i], burger_price[i]);
        }
        //puts("□□ 1. 빅맥(5900원)");
        //puts("□□ 2. 통새우와퍼 (5500원)");
        //puts("□□ 3. 싸이버거(4300원)");
        put("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
        int choice_num;
        while(1){
            printf(">>번호" );
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3){
                break;
            } else {
                puts("warling: 1~4의 번호를 입력해주세요");
            }
        }
        return choice_num;
}
// 2. 사이드 주문
int choice_side(void){

}
// 3. 드링크 주문
int choice_drink (void){

}

//주문 메뉴와 가격을 출력
void print_order(void) {
    int menu_len = sizeof(menu_save) / sizeof(menu_save[0]);
    int price_len = sizeof(price_save) / sizeof(price_save[0]);
    for(int i=0; i<menu_len; i++) {
        printf("주문[%d]: %s\n", menu_save[i]);
    }
    for(int i=0; i<price_len; i++) {
        printf("가격[%d]: %d\n", i, price_save[i]);
    }
}