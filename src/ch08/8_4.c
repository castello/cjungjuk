#include <stdio.h>                                                       
                                                                         
void changeX(char** px) {                                                
	*px = "ZZZ";   // ���ڿ� ��� "ZZZ"�� �ּҸ� ������ *px(main�Լ��� x)�� ����   
}                                                                        
                                                                         
int main(void) {                                                         
	char* x = "AAA";                                                    
                                                                         
	printf("x=%s\n", x);                                                
	changeX(&x);	// ������ x�� �ּҸ� �Ѱ��ش�.	                            
	printf("x=%s\n", x);                                                
                                                                         
	return 0;                                                           
}                                                                        
