//This is program to Initialise Mouse and display its cursor.

#include<stdio.h>
#include<dos.h>
void main()
{
union REGS i,o;
i.x.ax=1;
int86(0x33,&i,&o);
getch();
}
