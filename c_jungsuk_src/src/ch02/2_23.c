#include <stdio.h>                                                            
                                                                              
int main(void) {                                                              
	int    i = 91234567; 		// 8�ڸ��� 10����                                
	float  f	= (float)i; 	// int�� float�� ����ȯ                  
	int   i2	= (int)f; 	   	// float�� �ٽ� int�� ����ȯ      
                                                                              
	double d	= (double)i; 	// int�� double�� ����ȯ                 
	int   i3	= (int)d;     	// double�� �ٽ� int�� ����ȯ             
                                                                              
	float f2	= 1.666f;                                                     
	int   i4	= (int)f2;                                            
                                                                              
	printf("i=%d\n", i);                                                          
	printf("f=%f i2=%d\n", f,  i2);                                       
	printf("d=%f i3=%d\n", d,  i3);                                       
	printf("(int)%f=%d\n", f2, i4);                                       
	return 0;                                                             
}                                                                             
