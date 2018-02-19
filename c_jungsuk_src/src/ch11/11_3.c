#include <stdio.h>                                                     
                                                                       
int main(void) {                                                       
	char* fname1 = "c:\\work\\ch11\\aaa.txt";                         
	char* fname2 = "c:\\work\\ch11\\bbb.txt";                         
	char  buf[1024];                                                  
                                                                       
	FILE* in_f  = fopen(fname1, "r");                                 
	FILE* out_f = fopen(fname2, "w");                                 
                                                                       
	if (!in_f || !out_f) {  //  if(in_f==NULL || out_f==NULL) {       
		printf("����[%s]�� �� �� �����ϴ�.\n", !in_f ? fname1 : fname2);
		exit(1);                                                  
	}                                                                 
                                                                       
	printf("[%s]�� [%s]�� ���縦 �����մϴ�.\n", fname1, fname2);           
                                                                       
	while(fgets(buf, sizeof(buf), in_f)!=NULL)                        
		fputs(buf, out_f);                                        
                                                                       
	if (ferror(in_f) || ferror(out_f))                                
		printf("���� ���� �� ������ �߻��߽��ϴ�.\n");                     
                                                                       
	else                                                              
		printf("���� ���簡 �������ϴ�.\n");                            
                                                                       
	fclose(in_f);                                                     
	fclose(out_f);                                                    
                                                                       
	return 0;                                                         
}                                                                      
