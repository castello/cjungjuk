#include <stdio.h>                                                  
                                                                    
int main(void) {                                                    
	int  i = 5;                                                    
	int* p = &i;                                                   
                                                                    
	printf("i =%d\n",  i);   // ���� i�� ����� ���� ���                
	printf("&i=%p\n", &i);   // ���� i�� �ּҸ� ���                    
	printf("p =%p\n",  p);   // ������ p�� ����� ��(�ּ�)�� ���          
	printf("&p=%p\n", &p);   // ������ p�� �ּҸ� ���                   
                                                                    
	return 0;                                                      
}                                                                   
