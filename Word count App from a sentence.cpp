#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

char str[100];
int i,len,count=0;
while(1){
count=0;		
gets(str);
len=strlen(str);
for(i=0;i<=len;i++)
{
if(str[i]==' ')
{	
if(str[i-1]>='A' && str[i-1]<='Z' || str[i-1]>='a' && str[i-1]<='z' )
  {
  	count++;
  }

}	
}

if(str[len-1]==' ')
{
	count--;
}
count++;
printf("\nWord=%d\n",count);
count=0;
}
return 0;
}
