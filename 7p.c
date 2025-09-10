#include<stdio.h>
int main()
{
int a,i,j;
printf("enter the number of rows:");
scanf("%d",&a);
for( i=1; i<=a; i=i+1){
for( j=1; j<=a-i; j=j+1){
printf(" ");
}
for( j=1; j<=a; j=j+1){
printf("*");
}
printf("\n");
} 
return 0;
}
