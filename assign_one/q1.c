#include<stdio.h>
int main(){
int a,b,c;
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
int max=a;
if (b>max)
	max=b;
if (c>max)
	max=c;

printf("\nThe max of all is %d\n",max);
return 0;



}

