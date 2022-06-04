#include <8051.h>
void main()
{
unsigned char i,j; 
unsigned char massiv [5]=
{
0x90,
0xF8,
0x92,
0xB0,
0xF9,
};

P1=massiv [5];
i=0;
while(1) {
if(P30==1 && i<=5){
if(i==5){i=0;}  
P2=massiv[i]; 
i++;
for(j=0;j<100;j++)

continue;
}
} 

P2=massiv[i]; 
while(1);
}