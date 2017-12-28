#include<stdio.h>

int main(){
	int ii,jj;
	double aa;
	scanf("%d %d",&ii,&jj);
	aa = ii*ii + jj*jj;
	if(aa>40000){printf("outside\n");}
	else{printf("inside\n");}
	return 0;
} 
