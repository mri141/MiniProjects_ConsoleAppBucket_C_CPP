#include<stdio.h>
#include<conio.h>
#include<String.h>
int main()
{
    char str[1000];
    gets(str);

    int i,len,opa[1000],iden[1000],cons[1000],op,id,con;
    len=0;
    op=0;
    id=0;
    con=0;
    len= strlen(str);



    for(i=0;i<=len;i++){

       if(str[i]=='+' || str[i]=='-' || str[i]=='*'  ||  str[i]=='/' ||  str[i]=='=' )
       {
         opa[op]=str[i];
           op++;

       }
       else if((str[i]>='A' && str[i]>='Z') || (str[i]>='a' && str[i]>='z'))
       {
         iden[id]=str[i];
           id++;

       }
       else
        {

        cons[con]=str[i];
           con++;

       }

    }


printf("Operators=\t");

for(i=0;i<op;i++)
 {printf("%c",opa[i]);
  if(i!=op-1)  
   printf(",");
 
 }
printf("\n");

printf("Identifiers=\t");
for(i=0;i<id;i++)
   {
   	printf("%c",iden[i]);
   	 if(i!=id-1)  
   printf(",");
   	
   }


printf("\n");


printf("Constant=\t");
for(i=0;i<=len;i++)
printf("%c",cons[i]);

printf("\n");




}
