#include<stdio.h>
int main()
{
int a,b,c,n;
	for(a=1;a<5;a++){
		for(b=1;b<5;b++){
			for(c=1;c<5;c++){
				if(a!=b&&a!=c&&b!=c){
					n++;
				printf("%d%d%d ",a,b,c);
			 }
		   }
		}
	}
	printf("能组成%d个",n);
 } 
 
