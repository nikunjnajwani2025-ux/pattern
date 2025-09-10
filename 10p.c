#include<stdio.h>
int main()
{
int a,i,j;
printf("Enter the size of the square:");
scanf("%d",&a);
for (i=1;i<=a;i=i+1){
for (j=1;j<=a;j=j+1){
if (i==1){
printf("*");
}
else {
if (i==a){
printf("*");
}
else {
if (j==1){
printf("*");
}
else{
if (j==a){
printf("*");
}
else{
printf(" ");
}
}
}
}
}
printf("\n");
}
return 0;
}
