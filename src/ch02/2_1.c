#include <stdio.h>                                                 
                                                                   
int main(void) {                                                   
	int age = 14;                                                  
   	int year;                                                      
                                                                   
   	printf("year:%d\n", year);    // ���� year�� ���� ȭ�鿡 ���        
   	year = age + 2000;  // ���� age�� ���� 2000�� ���ؼ� ���� year�� ����   
                                                                   
   	printf("age:%d\n",  age);     // ���� age�� ���� ȭ�鿡 ���         
   	printf("year:%d\n", year);    // ���� year�� ���� ȭ�鿡 ���        
                                                                   
   	age = age + 1;      // ���� age�� ����� ���� 1������Ų��.             
   	printf("age:%d year:%d\n", age, year);                         
                                                                   
	return 0;                                                      
}	                                                               
