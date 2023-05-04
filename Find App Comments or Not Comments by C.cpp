#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,len=0;
    gets(str);

    len= strlen(str);

    for(i=0;i<len;i++)
    {
       if(str[i]=='/' && str[i+1]=='/')
       {
           printf("yes it's a comment");
           break;
       }
       else if(str[i]=='/' && str[i+1]=='*')
       {
           printf("yes it's a  multiple comment line");
           break;
       }

       else
        {
        printf("yes it's not a comment");
          break;
        }

    }

}
