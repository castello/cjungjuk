#include <stdio.h>                                                  
                                                                    
int main(void) {                                                    
	int i=5;                                                    
	int j=0;                                                    
                                                                    
	j = i++; // ������                                            
	printf("j=i++; ���� ��, i=%d, j=%d\n", i, j);                 
                                                                    
	i=5; // ����� ���ϱ� ����, i�� j�� ���� �ٽ� 5�� 0���� ����           
	j=0;                                                        
                                                                    
	j = ++i; // ������                                            
	printf("j=++i; ���� ��, i=%d, j=%d\n", i, j);                 
                                                                    
	return 0;                                                   
}                                                                   
