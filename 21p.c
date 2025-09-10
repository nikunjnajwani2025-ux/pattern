#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the number of rows:");
scanf("%d",&a);
for (i=a;i>=1;i=i-1){
for (j=0;j<a-i;j=j+1){
printf(" ");
}
for (j=1;j<=i;j=j+1){
printf("%d",i);
}
printf("\n");
}
return 0;
}
