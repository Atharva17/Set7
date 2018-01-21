#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	if((num1-num2)%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
