 #include <stdio.h>                                              
 #include <stdlib.h>                                             
                                                                 
 typedef void(FUNC_T)(void);  //  void(void)Ÿ���� FUNC_T�� ����     
                                                                 
 void f1(void) { printf("f1() is called.\n"); }                  
 void f2(void) { printf("f2() is called.\n"); }                  
                                                                 
 //void(**makeFuncPtrArr(void))(void) {                          
 FUNC_T** makeFuncPtrArr(int size) {                             
 	FUNC_T** fpArr = calloc(size, sizeof(FUNC_T*)); // ���� �Ҵ�  
                                                                 
 	return fpArr;                                              
 }                                                               
                                                                 
 int main(void) {                                                
 //	void(**fpArr)(void) = makeFuncArr(5);                      
 	FUNC_T** fpArr = makeFuncPtrArr(5);                        
                                                                 
 	fpArr[0] = f1;                                             
 	fpArr[1] = f2;                                             
                                                                 
 	// �Լ� ������ �迭�� ����� ��� �Լ��� ȣ��                         
 	while(*fpArr) {   // while(*fpArr!=NULL) {                 
 		(*fpArr)();                                        
 		fpArr++;                                           
 	}                                                          
                                                                 
 	return 0;                                                  
 }                                                               
