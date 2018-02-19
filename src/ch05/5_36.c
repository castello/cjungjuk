#include <stdio.h>                                                                         
#define STU 4  // �л���                                                                     
#define SUB 3  // �����                                                                     
                                                                                           
int main(void) {                                                                           
	int score[][STU+1][SUB+1] = {                                                      
		{ // 1��                                                                    
			{ 100, 100, 100 },  // 1�� 1��                                      
			{  90,  90,  90 },  // 1�� 2��                                      
			{  80,  80,  80 },  // 1�� 3��                                      
			{  70,  70,  70 },  // 1�� 4��                                      
		},                                                                         
                                                                                           
		{ // 2��                                                                    
			{  95,  95,  90 },  // 2�� 1��                                      
			{  85,  85,  80 },  // 2�� 2��                                      
			{  75,  75,  70 },  // 2�� 3��                                      
			{  65,  65,  60 }   // 2�� 4��                                      
		}                                                                          
	};                                                                                 
                                                                                           
	const int BAN = sizeof(score) / sizeof(score[0]);                                  
	int i, j, k;                                                                       
                                                                                           
	for(i=0;i<BAN;i++) {                                                               
		printf("[%d��]\n", i+1);                                                    
		printf("��ȣ ���� ���� ���� ����  ���\n");                                        
		printf("===============================\n");                               
                                                                                           
		for(j=0;j<STU;j++) {                                                       
			printf(" %d   ", j + 1);                                           
                                                                                           
			for(k=0;k<SUB;k++) {                                               
				score[i][j][SUB] += score[i][j][k];                        
				score[i][STU][k] += score[i][j][k];                        
                                                                                           
				printf("%3d  ", score[i][j][k]);                           
			}                                                                  
			// �л��� ������ ����� ���                                              
			printf("%4d  %5.1f\n",                                             
       		score[i][j][SUB], score[i][j][SUB]/(float)SUB);                            
		}                                                                          
                                                                                           
		printf("===============================\n");                               
		printf("���� ");                                                            
                                                                                           
		for(k=0;k<SUB;k++) {                                                       
			printf("%3d  ", score[i][STU][k]);                                 
		}                                                                          
                                                                                           
		printf("\n\n");                                                            
	}                                                                                  
                                                                                           
	return 0;                                                                          
}                                                                                          
