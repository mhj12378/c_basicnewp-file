#include <stdio.h> //9.28�� �� ���̸��� ������ 

//scant() �Լ�
//   +Ű����κ��� ���� �Է�

// c���� �޸� ������ġ ������ �ʿ�

int main(void)
{
    int age =4;

    //age ȣ��=> 4�� /
    printf("%d\n", age); //age 4

    printf("����: ");
    scanf("%d", &age); //age ������ �޸� �ּ�

    printf("%d", age); //age 4

    return 0;
}
