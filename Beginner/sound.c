#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int count=50;
    clrscr();
    while(count--)
    {
        sound(10*random(100));
        delay(75);
        nosound();
        textattr(random(16)+'a'+BLINK);
        cprintf("*");
    }
}
