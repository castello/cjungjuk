#include <stdio.h>                                                          
                                                                            
int main(void) {                                                            
	int  score;        // ������ �����ϱ� ���� ����                            
 	char grade =' ';   // ������ �����ϱ� ���� ����. �������� �ʱ�ȭ�Ѵ�.            
                                                                            
                                                                            
	printf("������ �Է��ϼ���.>");                                           
	scanf("%d", &score);                                                
                                                                            
   	if (score >= 90) {         // score�� 90�� ���� ���ų� ũ�� A����          
		grade = 'A';                                                
	} else if (score >=80) {   // score�� 80�� ���� ���ų� ũ�� B����          
		grade = 'B';                                                
	} else if (score >=70) {   // score�� 70�� ���� ���ų� ũ�� C����          
		grade = 'C';                                                
	} else {                   // �������� D����                            
		grade = 'D';                                                
	}                                                                   
                                                                            
	printf("����� ������ %c�Դϴ�.\n", grade);                               
                                                                            
	return 0;                                                           
}                                                                           
