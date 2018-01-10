#include <stdio.h> 
#define MAX 11
typedef struct{
	float a;
	float b;
}list;
list n[MAX];

int main(void) 
{ 
float a=0,b=0; 
int ii,jj;

scanf("%d",&ii);


for(jj=0;jj<ii;jj++){
	scanf("%f",&n[jj].a); 
	n[jj].b = n[jj].a;
}

for(jj=0;jj<ii;jj++){

	if (n[jj].a >= 701) 
n[jj].a = 5.63 * (n[jj].a-700) + 4.97 * 200 + 4.39 * 170 + 3.02 * 210 + 2.10 * 120; 

else if (n[jj].a >=501 && n[jj].a <= 700) 
n[jj].a = 4.97 * (n[jj].a-500) + 4.39 * 170 + 3.02 * 210 + 2.10 * 120; 

else if (n[jj].a >=331 && n[jj].a <= 500) 
n[jj].a = 4.39 * (n[jj].a-330) + 3.02 * 210 + 2.10 * 120; 

else if (n[jj].a >=121 && n[jj].a <= 330) 
n[jj].a = 3.02 * (n[jj].a-120) + 2.10 * 120; 

else if (n[jj].a <= 120) 
n[jj].a = n[jj].a * 2.10; 

printf("Summer months:%.2f\n",n[jj].a); 



if (n[jj].b >= 701) 
n[jj].b = 4.50 * (n[jj].b-700) + 4.01 * 200 + 3.61 * 170 + 2.68 * 210 + 2.10 * 120; 

else if (n[jj].b >=501 && n[jj].b <= 700) 
n[jj].b = 4.01 * (n[jj].b-500) + 3.61 * 170 + 2.68 * 210 + 2.10 * 120; 

else if (n[jj].b >=331 && n[jj].b <= 500) 
n[jj].b = 3.61 * (n[jj].b-330) + 2.68 * 210 + 2.10 * 120; 

else if (n[jj].b >=121 && n[jj].b <= 330) 
n[jj].b = 2.68 * (n[jj].b-120) + 2.10 * 120; 

else if (n[jj].b <= 120) 
n[jj].b = n[jj].b * 2.10; 

printf("Non-Summer months:%.2f\n",n[jj].b); 
}


return 0;
}
