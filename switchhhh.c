/*
switch refers to a conditional statement in C language, that is used to execute a code on the 'case' basis.
*/

#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a number (0-2): ");
	scanf("%d", &num);
	
	//switch statement
	switch(num){
		case 0:
			printf("thank you for entering 0\n");
			printf("have a nice day!\n");
		case 1:
			printf("thank you for entering 1\n");
			printf("have a nice day!\n");
		case 2:
			printf("thank you for entering 2\n");
			printf("have a nice day!\n");
		default:
			printf("please enter a number between 0 and 2 only");
			printf("thank you");			
	}
	
/* 	if(num == 0){
		printf("thank you for entering 0\n");
		printf("have a nice day!\n");
	}else if(num == 1){
		printf("thank you for entering 1\n");
		printf("have a nice day!\n");
	}else if(num == 2){
		printf("thank you for entering 2\n");
		printf("have a nice day!\n");
	}else{
		printf("please enter a number between 0 and 2 only");
		printf("thank you");
	} */
	
	return 0;
}