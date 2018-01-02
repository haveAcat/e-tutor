#include<stdio.h>

int main(){
	int ss,hh;
	float aa=0;
	scanf("%d %d",&hh,&ss);
	if(ss==1){
		aa = (hh-80)*0.7;
		printf("%.1f\n",aa);
	}
	else if(ss==2){
		aa = (hh-70)*0.6;
		printf("%.1f\n",aa);
	}
	return 0;
}
