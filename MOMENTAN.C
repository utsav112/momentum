#include<stdio.h>
#include<conio.h>
main()
{

  char chara;
  clrscr();
  printf("enter the cha value=");
  scanf("%c",&chara);

  if(chara>='a' && chara<='z'){
    printf("alpha");
  }
  else if(chara>= '0' && chara<= '9'){
    printf("digit");
  }
  else{
     printf("special character");
   }

  getch();

}
