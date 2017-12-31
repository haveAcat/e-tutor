#include<stdio.h>

int main(){
	int ii;
	int nn,pp;
	float rr,bb=0,aa=0;
	scanf("%f",&rr);
	scanf("%d",&nn);
	scanf("%d",&pp);
	for(ii=0;ii<nn;ii++){
		aa = aa + pp;
		bb = aa + aa*rr;
		aa = bb;
	}
	printf("%.0f\n",aa);
	return 0;
} 
