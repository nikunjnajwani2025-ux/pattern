#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number of rows:");
scanf("%d",&n);
for( i=1; i<=n; i=i+1){
for( j=1; j<=n-i; j=j+1){
printf(" ");
}
for( j=1; j<=2*i-1; j=j+1){
printf("*");
}
printf("\n");
} 
return 0;
}
