#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number of rows:");
scanf("%d",&a);
for (i=0;i<a;i=i+1){
for (j=0;j<i;j=j+1){
printf(" ");
}
for (j=0;j<(2*(a-1)-1);j=j+1){
if (j==0 || j==(2*(a-i)-2) || i==0){
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
