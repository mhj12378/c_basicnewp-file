#include <stdio.h>

int main (void) {
    int num1 = 20, num2 = 10, num3 = 50;
    int temp;

    //���� 3���� ���� �ٸ� ���� ����
    //  - ����: num1 �� num2 �� ���� �ٲ�(change)
    
    //�ڵ� ---
        // ü���� �ڵ� �ۼ�!!
    //�ڵ� ---
    temp = num1;
    num1 = num2;
    num2 = temp;

    if (num1 < num2) {
        temp = num1; 
        num1 = num2; 
        num2 = temp;
    } 
    if (num1 < num3) {  //swap
        temp = num1;    //else if �ϳ� ����Ǹ� �״��� ����x �׷��� ���� 3���� if������ �ؾ���
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
    //-�����Ϸ���
    printf("%d > %d > %d", num1, num2, num3);

    //����: num1 > num2 > num3
    //����1:num1 < num2 ->�� ��ȯ   :  num1 > num2
    //����2:nun1 < num3 ->�� ��ȯ   :  num1 > num2,num3
    //����3:num2 < num3 ->�� ��ȯ   :  num2 > num3
    // -> num1 > num2 > num3  
}