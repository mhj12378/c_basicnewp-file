#include <stdio.h>
#include <string.h>

//�޴�ǥ ����(����)
char *burger_name[3] = {"���", "��������", "���̹���"};
char *side_name[3]   = {"�Ƴʰ�", "ġ�ƽ", "��¡�"};
char *drink_name[3]  = {"��ī�ݶ�", "�����ݶ�", "��������Ʈ"};

// ����ǥ ����(����)
int burger_price[3] = {5900, 5500, 4300};
int side_price[3] = {2000, 1500, 2000};
int drink_price[3] = {1200, 1000, 1000};

// �� �ֹ� ��� ���� (����)
char *menu_save[3] = {}; // �ֹ� �޴�
int price_save[3] = {};  // �ֹ� ����

void print_main_menu(void);
void print_order(void);
int choice_burger(void);
int choice_side(void);
int choice_drink(void);

int main (void) {
    while(1) {
        // 1. ���θ޴� ���
        print_main_menu();

        //2.����� ���� �޴� ����
    //printf()
    //scanf("%d", &menu_num);
        int menu_num = 0; //����ڰ� ������ �޴���ȣ ����
        put(" �� ���Ͻô� �޴���ȣ�� �����ϼ���");
        while(1) { // 1. true, 0:false
            printf(">> ��ȣ:");
            scanf("%d", &menu_num);
            if (menu_num >= 1 && menu_num <= 4){ // 1~4 out        -�� �ùٸ� ���
                break;
            }else {
                puts("warling: 1~4�� ��ȣ�� �Է����ּ���");
            }
            // 1~4 in ��ȣ �� �Ѿ (break)
        }


    // �ۼ��غ�����~
    // 1~4 ������ ���� ������ �׳� �Ѿ
    // 1~4 �̿��� ���� ������ "�ùٸ� ���� �Է����ּ���" ���
    //    if(menu_num >= 1 && menu_num <=4) {
    //    } else {
    //       puts("warling: 1~4�� ��ȣ�� �Է����ּ���")
    //    }

        // 3.���θ޴� ���(1~4 in)
    //                                          int choice_num; // ����ڰ� ������ ���� �޴���ȣ ���� -- ����
    int order_num;                    //����ڰ� ������ ����޴� ��ȣ
        if(menu_num == 1) {              //�ܹ��� ��Ʈ
        order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];
            price_save[0] = burger_price[order_num-1];
        order_num = choice_side();
            menu_save[1] = side_name[order_num-1]; //���� �̸�
            price_save[1] = side_price[order_num-1];
        order_num = choice_drink();
            menu_save[2] = drink_name[order_num-1]; //���� �̸�
            price_save[2] = drink_price[order_num-1];
            print_order();
        
        } else if(menu_num =  2){        //�ܹ���
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];
            price_save[0] = burger_price[order_num-1];
            price_order();
        } else if(menu_num =  3){        //���̵�
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];
            price_save[0] = burger_price[order_num-1];
            price_order();
        } else if(menu_num =  4){        //�帵ũ
            order_num = choice_burger();
            menu_save[0] = burger_name[order_num-1];
            price_save[0] = burger_price[order_num-1];
            price_order();
        }

        // �߰� �ֹ� ����
        put("������������������������������������");
        puts("�߰� �ֹ��Ͻðڽ��ϱ�? (yes=0/ no=1)");
        printf(">>�Է�:");
        int order_yn;
        scanf("%d", &order_yn);
        if(order_yn == 1) {
            continue;
        } else {
            break;
        }
    }
    // + ���� �ֹ� ���(3ĭ) �� �÷��� (100ĭ)
    // �ֹ��Ҷ����� �� ��° count 
    // �������� ���
    // 1. �ֹ��ߴ� ��� �� �޴�, �Ѱ��� ���
}

// ���� �޴��� ����ϴ� �Լ�
void print_main_menu(void) {
    puts("�������������������������������")
    puts("�� == CUN ���� 2022 ==");
    puts("��  - Verion 1.0");
    puts("��  - Develop by cholong02");
    puts("��  - Date 2022.12.07");
    puts("��������������������������������������");
    puts("�� ���� ������ ã���ּż� �����մϴ�.");
    puts("�� ���Ͻô� �޴��� �������ּ���.");
    puts("��������������������������������������");
    puts("�� 1.�ܹ��� ��Ʈ");  // �ܹ���, ���̵�, ����
    puts("�� 2.�ܹ��� �޴�");  // �ܹ���
    puts("�� 3.���̵� �޴�");  // ���̵�
    puts("�� 4.�帵ũ �޴�");  // ����
    puts("��������������������������������������");
}

}

        put("������������������������������������");
        puts("== Burger Menu ==");
        for (int i=0; i<3; i++ ){
            printf("��� %d.%s(%d��) \n", i+1, burger_name[i], burger_price[i]);
        }
        //puts("��� 1. ���(5900��)");
        //puts("��� 2. �������� (5500��)");
        //puts("��� 3. ���̹���(4300��)");
        put("������������������������������������");
        int choice_num;
        while(1){
            printf(">>��ȣ" );
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3){
                break;
            } else {
                puts("warling: 1~4�� ��ȣ�� �Է����ּ���");
            }
        }
        printf("�Է� �� %d", choice_num);

        // choice_num �� ����ڰ� ������ ��ȣ
        // 1. ���
        // 2. ����� ��
        // 3. ���̹���
        // 4. burger_name[] ����? 3. �ε��� ���� 0~2
        menu_save[0] = burger_name[choice_num-1];
        price_save[0] = burger_price[choice_num-1];
        price_order();

        // �迭���� �������
        // sizeof() :() ���� ����Ʈ �� ���
        int menu_len = sizeof(menu_num) / sizeof(menu_save[0]);
        int price_len = sizeof(price_save) / sizeof(price_save[0]);

        for(int i=0; i<menu_len; i++) {
            printf("�ֹ�[%d]: %s\n", menu_save[i]);
        }
        for(int i=0; i<price_len; i++) {
            printf("����[%d]: %d\n", i, price_save[i]);
        }
        burger_name[choice_num-1];   //���� �̸�
        burger_price[choice_num-1];  //���� ����
    } else if(menu_num =  3){        //���̵�
        int order_num = choice_side();
        menu_save[0] = side_name[order_num-1];
        price_save[0] = side_price[order_num-1]
        
    } else if(menu_num =  4){        //�帵ũ     
    }

    

}


// 1. �ܹ��� �ֹ�
int choice_burger(void){
    put("������������������������������������");
        puts("== Burger Menu ==");
        for (int i=0; i<3; i++ ){
            printf("��� %d.%s(%d��) \n", i+1, burger_name[i], burger_price[i]);
        }
        //puts("��� 1. ���(5900��)");
        //puts("��� 2. �������� (5500��)");
        //puts("��� 3. ���̹���(4300��)");
        put("������������������������������������");
        int choice_num;
        while(1){
            printf(">>��ȣ" );
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3){
                break;
            } else {
                puts("warling: 1~4�� ��ȣ�� �Է����ּ���");
            }
        }
        return choice_num;
}
// 2. ���̵� �ֹ�
int choice_side(void){
    put("������������������������������������");
    puts("== Side Menu ==");
    for (int i=0; i<3; i++ ){
    printf("��� %d.%s(%d��) \n", i+1, side_name[i], side_price[i]);
    }
    //puts("��� 1. ���(5900��)");
        //puts("��� 2. �������� (5500��)");
        //puts("��� 3. ���̹���(4300��)");
        put("������������������������������������");
        int choice_num;
        while(1){
            printf(">>��ȣ" );
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3){
                break;
            } else {
                puts("warling: 1~4�� ��ȣ�� �Է����ּ���");
            }
        }
        return choice_num;
}
// 2. 

// 3. �帵ũ �ֹ�
int choice_drink (void){
int choice_side(void){
    put("������������������������������������");
    puts("== Drink Menu ==");
    for (int i=0; i<3; i++ ){
    printf("��� %d.%s(%d��) \n", i+1, drink_name[i], drink_price[i]);
    }
    //puts("��� 1. ���(5900��)");
        //puts("��� 2. �������� (5500��)");
        //puts("��� 3. ���̹���(4300��)");
        put("������������������������������������");
        int choice_num;
        while(1){
            printf(">>��ȣ" );
            scanf("%d", &choice_num);
            if(choice_num >= 1 && choice_num <= 3){
                break;
            } else {
                puts("warling: 1~4�� ��ȣ�� �Է����ּ���");
            }
        }
        return choice_num;
}
}

//�ֹ� �޴��� ������ ���
void print_order(void) {
    int menu_len = sizeof(menu_save) / sizeof(menu_save[0]);
    int price_len = sizeof(price_save) / sizeof(price_save[0]);
    for(int i=0; i<menu_len; i++) {
        printf("�ֹ�[%d]: %s\n", menu_save[i]);
    }
    for(int i=0; i<price_len; i++) {
        printf("����[%d]: %d\n", i, price_save[i]);
    }
}
