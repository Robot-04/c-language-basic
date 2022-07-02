/* WAP to enter any number and print sum it*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr ();
  printf ("Enter First number:");
  scanf ("%d", &a);
  printf ("Enter Second Number:");
  scanf ("%d", &b);
  printf ("Sum of %d and %d = %d", a,b,a+b);
 getch ();
}