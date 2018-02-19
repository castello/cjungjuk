#include <stdio.h>                                                
#include <stdlib.h>                                               
#include <time.h>                                                 
                                                                  
int main(void) {                                                  
	int ball[45];   // 45���� �������� �����ϱ� ���� �迭 ����.             
	const int LEN = sizeof(ball) / sizeof(ball[0]);               
	int i, n, tmp;                                                
                                                                  
	srand((unsigned)time(NULL));                                  
                                                                  
	// �迭�� �� ��ҿ� 1~45�� ���� �����Ѵ�.                              
	for(i=0;i<LEN;i++)                                            
		ball[i] = i+1;    // ball[0]�� 1�� ����ȴ�.                  
                                                                  
	// �迭�� ����� ���� ���´�.                                        
	for(i=0;i<LEN;i++) {                                          
		n = rand() % 45;  // �迭 ����(0~44)�� ������ ���� ��´�.        
                                                                  
		tmp     = ball[i];                                        
		ball[i] = ball[n];                                        
		ball[n] = tmp;                                            
	}                                                             
	// �迭 ball�� �տ��� ���� 6���� ��Ҹ� ����Ѵ�.                        
	for(i=0;i<6;i++)                                              
		printf("ball[%d]=%d\n", i, ball[i]);                      
}                                                                 
