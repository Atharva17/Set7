#include<stdio.h>
#include<string.h>
int main()
{
    char no[50];
    int i,l,count=0;
    scanf("%s",no);
    l=strlen(no);
    for(i=0;no[i]!='\0';i++)
      if(no[i]=='0' || no[i]=='1')
        count++;
        if(count==l)
        printf("yes");
        else
        printf("No");
        return 0;
}

