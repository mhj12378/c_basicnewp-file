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

int main (void) {
    

//printf()
//scanf("%d", &menu_num);
int menu_num = 0;
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
    int choice_num; // ����ڰ� ������ ���� �޴���ȣ ����
    if(menu_num == 1) {              //�ܹ��� ��Ʈ
    
    } else if(menu_num =  2){        //�ܹ���
        put("������������������������������������");
        puts("== Burger Menu ==");
        for (int i=0; i<3; i++ ){
            printf("��� %d.%s \n", i+1, burger_name[i]);
        }
        //puts("��� 1. ���(5900��)");
        //puts("��� 2. �������� (5500��)");
        //puts("��� 3. ���̹���(4300��)");
        put("������������������������������������");

    } else if(menu_num =  3){        //���̵�
        
    } else if(menu_num =  4){        //�帵ũ     
    
    }

    
    // ���θ޴� �Լ�



}