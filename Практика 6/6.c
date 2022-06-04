#include <8051.h>

void tput(unsigned char cl)
{
SBUF=cl;
while(!TI);
TI=0;
}
void main()
{
char z;
int i; 
unsigned char src[]={'D','E','P','6','E','H','E','B'};
PCON=0x80;
for(i=0; i<8; i++)
{
ACC=src[i];
SCON = 0x88;
tput(src[i]);
}
while(1);
}
