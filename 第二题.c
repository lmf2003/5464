#include<stdio.h>
int main()
{
	int a,n,b,i,c; 
	scanf("%d",&a);
	double pow(double c, double n);
for(n=0,i=a;a>0;n++){
		a/=10;
	}
    printf("%d是%d位数\n",i,n);
    for(b=0;i>0;i/=10) {
    	b=b*10+i%10; 
}
printf("逆序输出为%d\n",b);
}
