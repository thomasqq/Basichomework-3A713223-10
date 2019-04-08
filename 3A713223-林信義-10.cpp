#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char ch;
	
	printf("請輸入英文字母:"); 
	scanf("%c",&ch);
	
	if((ch>='A')&&(ch<='Z')){
		ch+=32;
		printf("轉換後為%c\n",ch);
	}
	else if((ch>='a')&&(ch<='z')){
		ch-=32;
		printf("轉換後為%c\n",ch);	
	}
	else{
		printf("您輸入的不是英文字母\n");
	}
	
	system("PAUSE");
	return 0;
}
