#include <stdio.h>                                
                                                  
void changeX(char* x) {  // �Ű������� Ÿ���� ������     
	x = "ZZZ";                                   
}                                                 
                                                  
int main(void) {                                  
	char* x = "AAA";                             
                                                  
	printf("x=%s\n", x);                         
	changeX(x);	  // ������ x�� ��(�ּ�)�� �Ѱ��ش�.
	printf("x=%s\n", x);                         
                                                  
	return 0;                                    
}                                                 
