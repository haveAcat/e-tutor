#include<stdio.h>

int main(){
	float a[10];
	int ii,jj;
	float temp;
	scanf("%f %f %f %f %f %f %f %f %f %f",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	for(ii=0;ii<=9;ii++){
		for(jj=0;jj<=9;jj++){
			if(a[ii]>a[jj])
			{
				temp = a[jj];
				a[jj] = a[ii];
				a[ii] = temp;
			}
		}
	}
	printf("maximum:%.2f\n",a[0]);
	printf("minimum:%.2f\n",a[9]);
	return 0;
}
