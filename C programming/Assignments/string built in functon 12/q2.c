#include<string.h>
#include<stdio.h>
void main()
{
 char str[]="sanket";
 for(int i=0;str[i]!='\0';i++)
 {
 	if (str[i]=='a')
  {
   	str[i]='$';
   }
}
   printf("%s",str);
}

