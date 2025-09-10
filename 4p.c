#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the no of rows:");
scanf("%d",&a);
for(i=a;i>=1;i=i-1){
for(j=1;j<=i;j=j+1){
printf("*");
}
printf("\n");
}
return 0;
}
