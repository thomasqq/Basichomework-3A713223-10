#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char ch;
	
	printf("�п�J�^��r��:"); 
	scanf("%c",&ch);
	
	if((ch>='A')&&(ch<='Z')){
		ch+=32;
		printf("�ഫ�ᬰ%c\n",ch);
	}
	else if((ch>='a')&&(ch<='z')){
		ch-=32;
		printf("�ഫ�ᬰ%c\n",ch);	
	}
	else{
		printf("�z��J�����O�^��r��\n");
	}
	
	system("PAUSE");
	return 0;
}
