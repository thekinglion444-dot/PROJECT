#include <stdio.h>
#include <conio.h>

int main(){
int i,n,num,sum=0;
float mean;
clrscr();
printf("enter number till you want to find: \n");
scanf("%d",  &num);
for(i=1;i<=num;i++)
{
printf("enter number %d: ",i);
scanf("%d", &n);
sum=sum+n;
}
mean=(float)sum/num;
printf("\nsum of the values is = %d", sum);
printf("\nmean of the values = %f", mean);
getch();
return 0;
}