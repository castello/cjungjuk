#include <stdio.h>                                                              
#define SIZE 10                                                                 
                                                                                
int main(void) {                                                                
	char board[SIZE][SIZE] = {0};  // ��� ��Ҹ� 0���� �ʱ�ȭ                    
	char shipBoard[SIZE-1][SIZE-1] = {                                      
  	  //  1  2  3  4  5  6  7  8  9                                         
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // 1                             
		{ 1, 1, 1, 1, 0, 0, 1, 0, 0 }, // 2                             
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // 3                             
		{ 0, 0, 0, 0, 0, 0, 1, 0, 0 }, // 4                             
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0 }, // 5                             
		{ 1, 1, 0, 1, 0, 0, 0, 0, 0 }, // 6                             
		{ 0, 0, 0, 1, 0, 0, 0, 0, 0 }, // 7                             
		{ 0, 0, 0, 1, 0, 0, 0, 0, 0 }, // 8                             
		{ 0, 0, 0, 0, 0, 1, 1, 1, 0 }, // 9                             
	};                                                                      
                                                                                
	int i, j;                                                               
	int x, y;                                                               
                                                                                
                                                                                
// 0�࿡ ���ȣ��, 0���� ����ȣ�� �����Ѵ�.                                               
	for(i=1;i<SIZE;i++) {                                                   
		board[0][i] = board[i][0] = i+'0';                              
	}                                                                       
                                                                                
	while(1) {                                                              
		printf("��ǥ�� �Է��ϼ���.(����� 0 0)>");                             
		scanf("%d %d", &x, &y);                                         
                                                                                
		if(x==0 || y==0) { // x �Ǵ� y�� ���� 0�̸� �ݺ����� �����.           
 		break;                                                          
		} else if(x < 0 || x >= SIZE || y < 0 || y >= SIZE) {           
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.\n");                
			continue;                                               
		}                                                               
                                                                                
		// shipBoard[x-1][y-1]�� ���� 1�̸�, 'O'�� board[x][y]�� �����Ѵ�.     
		board[x][y] = shipBoard[x-1][y-1] ? 'O':'X';                    
                                                                                
		// �迭 board�� ������ ȭ�鿡 ����Ѵ�.                                 
		for(i=0;i<SIZE;i++) {                                           
			for(j=0;j<SIZE;j++) {                                   
				printf("%c", board[i][j]);                      
			}                                                       
			puts("");                                               
		}                                                               
		puts("");                                                       
	}                                                                       
                                                                                
	return 0;                                                               
}                                                                               