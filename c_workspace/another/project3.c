#include <stdio.h>

int main (void) {
    printf("���:\n");
    int k = 1;
    int p, r;
    printf("%d", k);
    for (int i=1; i<=6; i++) {
        if (i == 1) {
            p = 1;
            printf("%d", p);
        } else if (i<=6) {
            r = k + p;
            printf("%d",r);
            k = p;
            p = r;
        }
    }
}

/**
 * ���ú��� kiosk ���α׷�
 * -�ܹ���
 * -ȭ�� �� �ܼ�(console)
 * - �������: ���� �ý���x
 *   �ܹ��� 1��, ���̵�1��, ���� 1��
 * 
 * -��� ����
 *  1. �޴� ��±��
 *  2. �Һ��� �޴� ����!
 *  3. ������ �޴� ����
 *  4. �ֹ� �� ���� ��� ���(�Ѿ�, �޴�)
 *  5.validation check(�� �ùٸ��� üũ
 *  - 1~5�� 7��)                                �μ����� �κ� Error
*/