#include <stdio.h>                                                           
#include <stdlib.h>                                                          
#include <string.h>                                                          
                                                                             
void add(char* str);   // ���ڿ� �迭(������ �迭)�� ���ڿ�(str)�� �߰��ϴ� �Լ�          
void printArr(void);                                                         
                                                                             
char* strArr[10];     // ���ڿ��� ������ �迭                                      
int   pos = 0;        // ���ڿ��� ������ ��ġ(�迭 strArr�� index)                   
                                                                             
int main(void) {                                                             
	char input[50];   	// ����ڰ� �Է��� �ܾ ������ �迭                    
                                                                             
	printf("������ �ܾ �Է��ϼ���.(ENTER:����)\n>");                             
                                                                             
	// ���͸� �Է��ϸ� gets()�� ����� �� ���ڿ��� �ǰ�, strlen()�� ����� 0�� �ȴ�.        
	while (strlen(gets(input))) {  // while(strlen(gets(input))!=0) {       
		add(input);                                                     
		printf(">");                                                    
	}                                                                       
                                                                             
	printf("\n�Է��Ͻ� �ܾ�� ������ �����ϴ�.\n");                                  
	printArr();                                                             
	return 0;                                                               
}                                                                            
                                                                             
void add(char* str) {                                                        
	// ���ڿ�(str)�� ������ �޸𸮸� ���� �Ҵ����.(�� ���� ������ ���� ����)                
	char* tmp = malloc(sizeof(char)*(strlen(str)+1));                       
                                                                             
	strcpy(tmp, str);  // ����ڰ� �Է��� ���ڿ��� ���� �Ҵ���� �޸�(tmp)�� ����       
	strArr[pos++] = tmp; // tmp(���ڿ��� �ּ�)�� �迭�� �����ϰ� pos�� ���� 1 ����      
}                                                                            
                                                                             
void printArr(void) {                                                        
	int i;                                                                  
	printf("[");                                                            
                                                                             
	for (i=0;i<pos;i++)                                                     
		printf("%s, ", strArr[i]);                                      
	printf("]\n");                                                          
}                                                                            