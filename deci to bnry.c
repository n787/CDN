#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,dig=0,result=0,mf=1;

	printf("Enter the decimal numner= ");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%2;
		result+=dig*mf;
		mf=mf*10;
		n=n/2;
	}
	printf("%d",result);
	return 0;
}
