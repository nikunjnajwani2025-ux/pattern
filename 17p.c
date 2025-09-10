#include<stdio.h>
int main()
{
int a,i,j;
printf("Enetr the number of rows:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
for (j=1;j<=i;j=j+1){
printf("%d",j);
}
printf("\n");
}
return 0;
}
