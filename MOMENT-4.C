#include<stdio.h>
#include<conio.h>

main()
{
   int unit,electric_bill,sur,total;
   clrscr();
   printf("enter unit=");
   scanf("%d",&unit);
   if(unit<=50){
     electric_bill = unit*50;
     }
     else if (unit<=150)
     {
     electric_bill=(unit-50)*0.75+25;
     }
     else if (unit<=250){
     electric_bill=(unit-150)*1.20+100;//25+75
     }else{

     electric_bill=(unit-250)*1.5+220;//25+75+120
     }
     sur = electric_bill*2.0;
     total = electric_bill+sur;
     printf("electric bill=%d",total);

     getch();

   }
