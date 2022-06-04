$MOD51
org 0
jmp start
org 0003h
jmp proc_INT0
org 0013h
proc_INT0:
cpl P0.6
Reti
start:
mov P0,#0
mov P1,#0
mov P2,#0
mov P3,#0
setb IE.7
setb IE.0
mov TCON,#01h
setb IP.0
m1:
setb P3.6
clr P3.6
mov P2,P1
jmp m1
END