#include<stdio.h>
int main()
{
int i,sp,k,d=1;
for(i=1; i<=5;i++;k=0)
{
for(sp=4;sp>=0;sp--)
{
printf(" ");
}
while(k!=2*i-1)
{
if(k%2!=0)
{
printf(" ");
}
else
{
printf("%d",d);
}
k++;
d++;
}
}
return0;
}
