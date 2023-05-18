#include<stdio.h>
#include<conio.h>

main()
{
   int num;
   clrscr();
   printf("enter the value num");
   scanf("%d",&num);
   (num%2==1) ? printf("num is odd"):printf("num is even");

   getch();

}