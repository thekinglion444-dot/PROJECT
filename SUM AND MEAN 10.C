#include <stdio.h>
#include <conio.h>

int main(){
int i,n,sum=0;
float mean;
clrscr();
printf("enter 10 integer values: \n");
for(i=1;i<=10;i++)
{
printf("enter number %d: ",i);
scanf("%d", &n);
sum=sum+n;
}
mean=(float)sum/10.0;
printf("\nsum of the 10 values = %d", sum);
printf("\nmean of the 10 values = %f", mean);
getch();
return 0;
}
