#include <stdio.h>                                                            
                                                                              
int  multiply(int x, int y);   // �� ���� ���� ����� ��ȯ                          
int  getUserInput(void);       // ������� �Է¹޾Ƽ� ��ȯ                           
void printGugudan(int dan);    // ������ ��(dan)�� ���                           
void printGugudanAll(void);    // ������ ��ü�� ���                               
                                                                              
int main(void) {                                                              
	int dan = getUserInput();  	// int getUserInput(void)�� ȣ��           
                                                                              
	if(2 <= dan && dan <= 9)                                                 
		printGugudan(dan);      // void printGugudan(int dan)�� ȣ��       
	else                                                                     
		printGugudanAll();      // void printGugudanAll(void)�� ȣ��       
                                                                              
	return 0;                                                                
}                                                                             
                                                                              
int multiply(int x, int y) { return x * y; }                                  
int getUserInput(void) {                                                      
	int num;                                                                 
	printf("input a number(2~9) :");                                         
	scanf("%d", &num);                                                       
	return num;                                                              
}                                                                             
                                                                              
void printGugudan(int dan) {                                                  
	int i;                                                                   
	for(i=1;i<=9;i++)                                                        
		printf("%d*%d=%2d\n", dan, i, multiply(dan, i));                 
}                                                                             
                                                                              
void printGugudanAll(void) {                                                  
	int i, j;                                                                
	for(i=1;i<=9;i++) {                                                      
		for(j=2;j<=9;j++)                                                
			printf("%d*%d=%2d ", j, i, multiply(j,i));               
		printf("\n");                                                    
	}                                                                        
}                                                                             
