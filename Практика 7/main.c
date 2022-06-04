#include <8052.h>

void imp(unsigned int cnt){
	do{
		if (cnt != 0){cnt--; P00 = 0;}
		else {P00 = 1;}
	}while(TF2 == 0);
	TF2 = 0;
}

void main(){
	RCAP2H = 0x0;
	RCAP2L = 0x0;

	T2CON &= 0xFC;
	ET2 = 1;
	EA = 1;
	T2CON |= 0x4;

	while(1){
		if (P10 == 1){ imp(1725);}
		else imp(1035);
	}
}

