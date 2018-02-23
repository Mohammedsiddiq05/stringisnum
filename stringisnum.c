#include<stdio.h>
int main()
{
char string;
printf("\n enter the string");
scanf("%s",&string);
if((string>='a'&&string<='z')||(string>='A'&&string<='Z'))
printf("\nno");
else
{
printf("\n yes");
}
return 0;
}
