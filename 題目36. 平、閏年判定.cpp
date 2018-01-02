#include<stdio.h>

int main(){
	int ii;
	scanf("%d",&ii);
	if(ii%100!=0){
		if(ii%4==0)
		printf("Bissextile Year\n");
		else
		printf("Common Year\n");
	}
	else if(ii%400==0){
		printf("Bissextile Year\n");
	}
	else
	printf("Common Year\n");
	return 0;
}
