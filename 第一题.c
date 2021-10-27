#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<5;a++){
		for(b=1;b<5;b++){
			for(c=1;c<5;c++){
if(a!=b){
 if(b!=c){
  if(c!=a){
	 printf("%d%d%d ",a,b,c);
	        }
          }
       	}
			}
		}
	}
}

