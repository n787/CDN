// programm for converting binary number to decimal 
#include<stdio.h>
int main()
{
	int n,dig=0,result=0,mf=1;
	
	printf("Enter the binary numner= ");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		result+=dig*mf;
		mf=mf*2;
		n=n/10;
	}
	printf("%d",result);
	return 0;
}
