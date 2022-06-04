#include <8051.h>
void main()
{
 char symbol[4][4]={{'a','3','2','1'},
                   {'b','6','5','4'},
                   {'c','9','8','7'},
                   {'d','#','0','*'}};
 int i = 0,n = 0;

 P0 = 0x38;
 P2 = 0x1;
 P2 = 0x0;
 P0 = 0x80;
 P2 = 0x1;
 P2 = 0x0;

 while(1){

  P10 = 0;
  if(P14 == 0){ P0 = symbol[0][3]; P2 = 0x3; P2 = 0x2;}
  if(P15 == 0){ P0 = symbol[0][2]; P2 = 0x3; P2 = 0x2;}
  if(P16 == 0){ P0 = symbol[0][1]; P2 = 0x3; P2 = 0x2;}
  if(P17 == 0){ P0 = symbol[0][0]; P2 = 0x3; P2 = 0x2;}
  P10 = 1;

  P11 = 0;
  if(P14 == 0){ P0 = symbol[1][3]; P2 = 0x3; P2 = 0x2;}
  if(P15 == 0){ P0 = symbol[1][2]; P2 = 0x3; P2 = 0x2;}
  if(P16 == 0){ P0 = symbol[1][1]; P2 = 0x3; P2 = 0x2;}
  if(P17 == 0){ P0 = symbol[1][0]; P2 = 0x3; P2 = 0x2;}
  P11 = 1;

  P12 = 0;
  if(P14 == 0){ P0 = symbol[2][3]; P2 = 0x3; P2 = 0x2;}
  if(P15 == 0){ P0 = symbol[2][2]; P2 = 0x3; P2 = 0x2;}
  if(P16 == 0){ P0 = symbol[2][1]; P2 = 0x3; P2 = 0x2;}
  if(P17 == 0){ P0 = symbol[2][0]; P2 = 0x3; P2 = 0x2;}
  P12 = 1;

  P13 = 0;
  if(P14 == 0){ P0 = symbol[3][3]; P2 = 0x3; P2 = 0x2;}
  if(P15 == 0){ P0 = symbol[3][2]; P2 = 0x3; P2 = 0x2;}
  if(P16 == 0){ P0 = symbol[3][1]; P2 = 0x3; P2 = 0x2;}
  if(P17 == 0){ P0 = 0x1; P2 = 0x1; P2 = 0x0;}
  P13 = 1;

 }
}
