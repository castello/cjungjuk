#include <stdio.h>                                             
                                                               
typedef struct { int hour, min, sec; } myTime;                 
                                                               
int timeToSec(myTime t)   { /* ��˸��� �ڵ带 �־� �ϼ��Ͻÿ�. */ }    
myTime secToTime(int sec) { /* ��˸��� �ڵ带 �־� �ϼ��Ͻÿ�. */ }    
                                                               
int main(void) {                                               
	myTime t = secToTime(45296);                              
                                                               
	printf("%d�ð� %d�� %d��\n", t.hour, t.min, t.sec);          
	printf("%d��\n", timeToSec(t));                            
	return 0;                                                 
}                                                              
