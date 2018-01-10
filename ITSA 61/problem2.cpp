#include<stdio.h>
#define MAX 11
typedef struct{
	int kk;
	int lb;
	int mm;
}list;
list a[MAX];

int main(){
	int ii,jj,nn;
	int ss1=0,ss2=0;
	int bb=0;//jia ge 
	scanf("%d",&ii);
	for(jj=0;jj<ii;jj++){
		scanf("%d,%d,%d",&a[jj].kk,&a[jj].lb,&a[jj].mm);
	}
	for(jj=0;jj<ii;jj++){
		if(a[jj].lb==1){bb = 17;}
		else{bb = 25;}
		ss1 = bb * a[jj].mm;
		ss2 = a[jj].kk - ss1;
		
		if(ss2<5){printf("Coin 1:%d\n",ss2);}
		else if(ss2==5){printf("Coin 5:1\n");}
		else if(5<ss2&&ss2<10){printf("Coin 1:%d,Coin 5:1\n",(ss2-5));}
		else if(ss2==10){printf("Coin 10:1\n");}
		else if(10<ss2&&ss2<50){
			if(ss2%10==0){printf("Coin 10:%d\n",ss2/10);}
			else if(ss2%5==0){printf("Coin 5:1,Coin 10:%d\n",ss2/10);}
			else{
				if(ss2%10<5){printf("Coin 1:%d,Coin 10:%d\n",ss2%10,ss2/10);}
				else if(ss2%10>5){printf("Coin 1:%d,Coin 5:1,Coin 10:%d\n",ss2%5,ss2/10);}
			}
		}
		else if(ss2==50){printf("Coin 50:1\n");}
		else {
			if(ss2%50==0){printf("Coin 50:%d\n",ss2/50);}
			else if(ss2%10==0){printf("Coin 10:%d,Coin 50:%d\n",(ss2%50)/10,ss2/50);}
			else if(ss2%5==0){printf("Coin 5:1,Coin 10:%d,Coin 50:%d\n",(ss2%50)/10,ss2/50);}
			else{
				if(ss2%10<5){printf("Coin 1:%d,Coin 10:%d,Coin 50:%d\n",ss2%5,(ss2%50)/10,ss2/50);}
				else if(ss2%10>5){printf("Coin 1:%d,Coin 5:1,Coin 10:%d,Coin 50:%d\n",ss2%5,(ss2%50)/10,ss2/50);}
			}
		}
	}
	return 0;
} 
