#include<stdio.h>
#include<conio.h>

main()
{   clrscr();
    char day;
    printf("\nm for monday");
    printf("\nT for tuesday");
    printf("\nw for wednesday");
    printf("\nt for thursday");
    printf("\nf for friday");
    printf("\ns for saturday");
    printf("\nS for sunday");
    printf("\n enter alpha of day");
    scanf("%c",&day);

    switch(day)
    {
       case'm':
	  printf("monday");
	  break;

       case'T':
	  printf("tuesday");
	  break;

       case'w':
	  printf("wednesday");
	  break;

       case't':
	  printf("thursday");
	  break;

       case'f':
	  printf("friday");
	  break;

       case's':
	  printf("saturday");
	  break;

       case'S':
	  printf("sunday");
	  break;

       default:printf("enter the true value");

    }

    getch();
}