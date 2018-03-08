#include <stdio.h>
int main(void) 
{
	int num,i,res;
	scanf("%d",&num);
	res=num/10;
	num=0;
	for(i=0;i<=res;i++)
	num+=10;
	printf("%d",num);
	return 0;
}
