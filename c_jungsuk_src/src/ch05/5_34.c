#include <stdio.h>                                                                
                                                                                  
int main(void) {                                                                  
	char input[11];                                                           
	char morse[][5] = {                                                       
		".-", "-...", "-.-.","-..", "."        // a, b, c, d, e           
		,"..-.", "--.", "....","..",".---"     // f, g, h, i, j          
		, "-.-", ".-..", "--", "-.", "---"     // k, l, m, n. o           
		, ".--.", "--.-",".-.","...","-"       // p, q, r, s, t           
		, "..-", "...-", ".--", "-..-","-.--"  // u, v, w, x, y          
		, "--.."                               // z                       
	};                                                                        
	int i;                                                                    
                                                                                  
	printf("�𸣽���ȣ�� ��ȯ�� �ܾ�(10�� ������ ���ҹ���)�� �Է��ϼ���.>");                  
	scanf("%10s", input);                                                     
                                                                                  
	for(i=0;input[i];i++)                                                     
		printf("%s", morse[input[i]-'a'] );                               
	printf("\n");                                                             
                                                                                  
	return 0;                                                                 
}                                                                                 