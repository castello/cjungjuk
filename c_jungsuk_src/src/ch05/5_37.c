#include <stdio.h>                                                            
#include <string.h>                                                           
                                                                              
int main(void) {                                                              
	char words[][2][10] = {                                               
		{"chair","����"},       // words[0][0], words[0][1]            
		{"computer","��ǻ��"},   // words[1][0], words[1][1]           
		{"integer","����"}      // words[2][0], words[2][1]            
	};                                                                    
	char answer[20];                                                      
                                                                              
	int i;                                                                
                                                                              
	const int WORD_CNT= sizeof(words) / sizeof(words[0]);                 
                                                                              
	for(i=0;i<WORD_CNT;i++) {                                             
		printf("Q%d. %s�� ����?", i+1, words[i][0]);                    
		scanf("%s", answer);                                          
                                                                              
		if(strcmp(words[i][1], answer)==0) {                          
			printf("�����Դϴ�.\n\n");                               
		} else {                                                      
			printf("Ʋ�Ƚ��ϴ�. ������ %s�Դϴ�.\n\n", words[i][1]);	
		}                                                             
	}                                                                     
	printf("\n");                                                         
                                                                              
	return 0;                                                             
}                                                                             
