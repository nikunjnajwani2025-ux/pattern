#include<stdio.h>
int main()
{
int a,i,j,num;
printf("Enetr the number of rows:");
scanf("%d",&a);
for (i=0;i<a;i=i+1){
for (j=0;j<a-i-1;j=j+1){
printf(" ");
}
num=1;
for (j=0;j<=i;j=j+1){
printf("%d",num);
num=num*(i-j)/(j+1);
}
printf("\n");
}
return 0;
}
