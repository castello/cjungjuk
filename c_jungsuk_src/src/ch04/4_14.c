#include <stdio.h>                                                                          
                                                                                            
int main(void) {                                                                            
	int sum = 0;	// �հ踦 �����ϱ� ���� ����.                                              
	int i;                                                                              
                                                                                            
	for(i=1; i<=10; i++) {                                                              
		sum += i ;	//	sum = sum + i;                                      
		printf("1���� %2d ������ ��: %2d\n", i, sum);                                   
	}                                                                                   
                                                                                            
	return 0;                                                                           
}                                                                                           
