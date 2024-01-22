#include<stdio.h>

int main(){

	int ch = 2;
	switch(ch){
		case 1:
			printf("case one");
			break;
		case 2:
		case 3:
			printf("case 2 or 3");
			break;
		default:
			printf("default case");
			break;
	}
	return 0;
}
