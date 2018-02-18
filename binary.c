#include <stdio.h>
int main(void)
{
     char a[10];
     int i,b,n=0;
     gets(a);
     b=strlen(a);
       for(i=0;a[i]!='\0';i++)
         if(a[i]=='0' || a[i]=='1')
             n++;
             if(n==b)
                printf("yes");
	return 0;
}
 
