#include<stdio.h>
#include<conio.h>
enum week {mon ,tus, wed,thu,fri,sat, sun};
void main()
{
 enum week day;
 day=wed;
 clrscr();
 printf("%d",day);
 getch();
}