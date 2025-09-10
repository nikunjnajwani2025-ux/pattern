#include <stdio.h>

int main() {
int a,i,j;
printf("Enter the number of rows: ");
scanf("%d", &a);
for (i = 1; i <= a; i=i+1) {
for (j = 1; j<= a - i; j=j+1) {
printf(" ");
}
for (int j = 1; j <= i * 2; j=j+1) {
if (j % 2 != 0){
printf("1");
} else {
printf("0");
}
}
printf("\n");
}
return 0;
}
