#include<stdio.h>
//#include<conio.h>
int main()
{
   int a;
//   clrscr();
   printf("enter a year :");
   scanf("%d",&a);

   if((a%100)==0)

   {
      printf("%d is a centuary year.\n",a);

      if((a%400)==0)
      printf("%d is also a leap year.\n",a);

      else
      printf("but %d is not a leap year.",a);
   }

   else if((a%4)==0)
   printf("%d is a leap year.",a);

   else
   printf("%d is not a leap year.",a);
   
   return 0;

//   getch();
}
