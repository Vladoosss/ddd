$MOD51
jmp start
org 0bh
clr TCON.4
reti
org 20h

start:
clr C 
mov TMOD,#01h ;?????? ????? ?????? ??????? T0
setb IE.7 ;????????? ??????????
setb IE.1 ;????????? ?????????? ?? ??????? T/C0
mov P2,#0h 

Period:
mov A,#0h 
mov TL0,#12h
mov TH0,#0FFh
mov P2,A
setb TCON.4 

next1:
mov A,#80h
jnb TCON.5, next1 
mov TL0,#12h
mov TH0,#0FFh
mov P2,A
setb TCON.4 

next2:
add A,#2h 
mov P2,A
jnb TCON.5,next2 

mov A, #0FFh 
mov TL0,#70h
mov TH0,#0FFh
mov P2,A
setb TCON.4 

next3:
jnb TCON.5,next3 
mov A,#03Fh 

mov TL0,#12h
mov TH0,#0FFh
mov P2,A
setb TCON.4 

next4:
add A,#0h 
mov P2,A
jnb TCON.5,next4 

mov A,#4h 

mov TL0,#012h
mov TH0,#0FFh
mov P2,A
setb TCON.4 

next5:
jnb TCON.5,next5 

clr C
jmp Period 

END