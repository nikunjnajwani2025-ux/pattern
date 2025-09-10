#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number of rows:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
for (j=i;j<a;j=j+1){
printf(" ");
}
for (j=1;j<=(2*i-1);j=j+1){
if (j==1 || j==(2*i-1) || i==a){
printf("*");
}
else {
printf(" ");
}
}
printf("\n");
}
return 0;
}
