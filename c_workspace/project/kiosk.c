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
    // 1. ���θ޴� ���
    void print_main_menu();

//printf()
//scanf("%d", &menu_num);
    int menu_num = 0;
    //2.����� ���θ޴� �Է�
    put(" �� ���Ͻô� �޴���ȣ�� �����ϼ���");
    while(1) { // 1. true, 0:false
        printf(">> ��ȣ:");
        scanf("%d", &menu_num);
        if (menu_num < 1 || menu_num > 4){ // 1~4 out        -�� �ùٸ� ���
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
//                                            int choice_num; // ����ڰ� ������ ���� �޴���ȣ ���� -- ����
    if(menu_num == 1) {              //�ܹ��� ��Ʈ
    
    } else if(menu_num =  2){        //�ܹ���
        int order_num = choice_burger();

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
        
    } else if(menu_num =  4){        //�帵ũ     
    
    }

    
    // ���θ޴� �Լ�


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

}
// 3. �帵ũ �ֹ�
int choice_drink (void){

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