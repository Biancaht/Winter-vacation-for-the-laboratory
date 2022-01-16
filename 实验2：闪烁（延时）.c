#include <reg52.h>
typedef unsigned char u8;
typedef unsigned int u16;

sbit LED=P2^0;

void delay(u16 i)
{
    while(i--);
}

void main()
{
   while(1)
   {
   	   LED=0;
	   delay(50000);
	   LED=1;
	   delay(50000);
   }
}