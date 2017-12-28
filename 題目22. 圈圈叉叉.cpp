#include<stdio.h>

int main(){
	int a[2][2];
	int ii,jj;
	int aa=0;
	scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]);
	scanf("%d %d %d",&a[1][0],&a[1][1],&a[1][2]);
	scanf("%d %d %d",&a[2][0],&a[2][1],&a[2][2]);
	
	for(ii=0;ii<3;ii++){
		if(a[ii][0]==a[ii][1] && a[ii][0]==a[ii][2])
		aa++;
	}
	for(jj=0;jj<3;jj++){
		if(a[0][jj]==a[1][jj] && a[0][jj]==a[2][jj])
		aa++;
	}
	if(a[0][0]==a[1][1] && a[0][0]==a[2][2])
	aa++;
	else if(a[0][2]==a[1][1] && a[0][2]==a[2][0])
	aa++;
	
	if(aa==0)
	printf("False\n");
	else if(aa!=0)
	printf("True\n");
	return 0;
} 
