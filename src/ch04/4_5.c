#include <stdio.h>                                                                           
                                                                                             
int main(void) {                                                                             
	int  score;                                                                          
	char grade;                                                                          
	char opt = '0';                                                                      
                                                                                             
	printf("������ �Է����ּ���.>");                                                           
	scanf("%d", &score);                                                                 
	printf("����� ������ %d�Դϴ�.\n", score);                                                
                                                                                             
	if (score >= 90) {       	// score�� 90�� ���� ���ų� ũ�� A����(grade)               
		grade = 'A';                                                                 
		if (score >= 98) {  	// 90�� �̻� �߿����� 98�� �̻��� A+                        
			opt = '+';	                                                     
		} else if (score < 94) {  // 90�� �̻� 94�� �̸��� A-                            
			opt = '-';                                                           
		}                                                                            
	} else if (score >= 80){   	// score�� 80�� ���� ���ų� ũ�� B����(grade)               
		grade = 'B';                                                                 
		if (score >= 88) {                                                           
			opt = '+';                                                           
		} else if (score < 84)	{                                                    
			opt = '-';                                                           
		}                                                                            
	} else {	         	// �������� C����(grade)                                 
		grade = 'C';                                                                 
	}                                                                                    
	                                                                                     
	printf("����� ������ %c%c�Դϴ�.\n", grade, opt);                                         
                                                                                             
	return 0;                                                                            
}                                                                                            
