#include <stdio.h>
#include <conio.h>

int main(){
float average;
int sub1,sub2,sub3,totalmarks;
clrscr();
printf("Enter subject 1 marks: ");
scanf("%d", &sub1);
printf("enter subject 2 marks: ");
scanf("%d", &sub2);
printf("enter subject 3 marks: ");
scanf("%d", &sub3);
totalmarks=sub1+sub2+sub3;
average=totalmarks/3;
printf("total marks: %d\n", totalmarks);
printf("average marks: %f\n" ,average);
getch();
return 0;
}
