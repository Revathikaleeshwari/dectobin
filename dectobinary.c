#include<stdio.h>
long toBinary(int);
int main()
{
long binarynumber;
int decimalnumber;
printf("Enter a decimal number:");
scanf("%d",&decimalnumber);
binarynumber= toBinary(decimalnumber);
printf("Binary value is: %1d",binarynumber);
return 0;
}
long toBinary(int decimalnumber)
{
static long binarynumber,remainder,factor=1;
if(decimalnumber!=0)
{
remainder=decimalnumber % 2;
binarynumber=binarynumber+remainder+factor;
factor=factor*10;
tobinary(decimalnumber /2);
}
return binarynumber;
}
