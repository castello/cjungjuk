#include <stdio.h>                                                             
                                                                               
int main(void) {                                                               
	const int MAX = 999;                                                      
	int i = 100, i2 = 200;                                                    
                                                                               
	int *ptr = (int*)&MAX; // ����ȯ �����Ұ�                                     
	const int *ptr2=&i;  // const int *ptr2=(const int*)&i; ����ȯ ��������       
                                                                               
	const int* const PTR = &MAX;	// ������ ��� PTR����                        
	      int* const PTR2 = &i;	  // ������ ��� PTR2����                     
                                                                               
	printf("MAX=%d\n", MAX);                                                  
	printf("i=%d\n", i);                                                      
	printf("*ptr =%d\n", *ptr);                                               
	printf("*ptr2=%d\n", *ptr2);                                              
                                                                               
//	*ptr  = 200;  // ����. *ptr�� ��� MAX�� ����Ұ�                              
//	*ptr2 = 100;  // ����. ptr2�� Ÿ���� 'const int'�� ����Ұ�                     
	ptr   = &i;   // ptr�� ����� �ƴ϶� ���氡��                                    
	ptr2  = &i2;  // ptr2�� ����� �ƴ϶� ���氡��                                   
//	PTR   = &i;   // ����. PTR�� ����� ����Ұ�                                   
//	PTR2  = &i2;  // ����. PTR2�� ����� ����Ұ�                                  
	*ptr  = 300;  // ���� *ptr��  ���� i�̹Ƿ� ���氡��                               
//	*PTR  = 300;  // ����. *PTR�� ���(MAX)�� ����Ұ�                             
	*PTR2 = 111;  // OK. *PTR2�� ���� i�� ���氡��                                
                                                                               
	printf("i=%d\n", i);                                                      
	printf("*ptr =%d\n", *ptr);                                               
	printf("i=%d\n", i);                                                      
	printf("*PTR=%d\n", *PTR);                                                
	printf("*PTR2=%d\n", *PTR2);                                              
	return 0;                                                                 
}                                                                              
                                                                               
