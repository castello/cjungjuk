#include <stdio.h>

int main(void) {
	int x = 10;
	int y = 20;
	int tmp;

	printf("x:%d y:%d\n", x, y);  // �ٲٱ� �� x, y�� ���� ���

	tmp = x;
	x   = y;
 	y   = tmp;

  	printf("x:%d y:%d\n", x, y); // �ٲ� �� x, y�� ���� ���
}
