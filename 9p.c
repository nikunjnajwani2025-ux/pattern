#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the no of rows:");
scanf("%d",&a);
for (i=a;i>=1;i=i-1){
for (j=1;j<=a-i;j=j+1){
printf(" ");
}
for (j=1;j<=2*i-1;j=j+1){
printf("*");
}
printf("\n");
}
for (i=2;i<=a;i=i+1){
for (j=1;j<=a-i;j=j+1){
printf(" ");
}
for (j=1;j<=2*i-1;j=j+1){
printf("*");
}
printf("\n");
}
return 0;
}
