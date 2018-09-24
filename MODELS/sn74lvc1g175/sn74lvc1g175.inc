******************************************************************************
* *
* TEXAS INSTRUMENTS INCORPORATED
* Standard Linear and Logic Group
* HSPICE Model for SN74LVC1G175
* PROPERTY OF TEXAS INSTRUMENTS INCORPORATED. UNAUTHORIZED
* REPRODUCTION AND/OR DISTRIBUTION IS STRICTLY PROHIBITED.
*
* THIS PRODUCT IS PROTECTED UNDER COPYRIGHT LAW.
* CREATED 2005, (C) COPYRIGHT 2005, TEXAS INSTRUMENTS
* INCORPORATED, ALL RIGHTS RESERVED
*
* UNLESS THERE IS A SIGNED, WRITTEN AGREEMENT TO THE
* CONTRARY, TEXAS INSTRUMENTS (TI) IS PROVIDING THE IBIS
* MODELS AND WITHOUT ANY WARRANTY, EXPRESSED OR
* IMPLIED. TI ASSUMES NO LIABILITY FOR:
* 1) THE ACCURACY OF THE HSPICE MODELS PROVIDED TO YOUR
* COMPANY;
* 2) THE PROPER FUNCTIONING OF THESE HSPICE MODELS IN YOUR
* DESIGN OR FOR ANY RESULTING APPLICATIONS; OR
* 3) INFRINGEMENT OF PATENTS, COPYRIGHTS OR INTELLECTUAL
* PROPERTY RIGHTS RESULTING FROM YOUR USE OF THESE HSPICE
* MODELS.
*
* TI PROVIDES HSPICE MODELS AS A SERVICE TO OUR CUSTOMERS.
* YOU AND YOUR COMPANY SHALL NOT DISTRIBUTE, SELL OR GIVE
* THESE MODELS TO ANYONE ELSE WITHOUT PRIOR WRITTEN
* PERMISSION FROM TI.
*
* TI RESERVES THE RIGHT TO MAKE CHANGES TO OUR PRODUCTS OR
* TO DISCONTINUE ANY SEMICONDUCTOR PRODUCT OR SERVICE
* WITHOUT NOTICE, AND ADVISES OUR CUSTOMERS TO OBTAIN THE
* LATEST VERSION OF RELEVANT INFORMATION TO VERIFY, BEFORE
* PLACING ORDERS, THAT THE INFORMATION BEING RELIED ON IS
* CURRENT.
*
* PLEASE BE AWARE THAT YOUR RECEIPT AND USE OF THE HSPICE
* INFORMATION PROVIDED SHALL SERVE AS ACCEPTANCE OF THESE
* TERMS AND CONDITIONS. IF YOU DO NOT ACCEPT THESE TERMS,
* YOU SHOULD RETURN OR DESTROY THE HSPICE MODELS AND ANY
* OTHER ACCOMPANYING INFORMATION IMMEDIATELY.
* SN74LVC1G175
* HSPICE NETLIST file built on Mon Oct 24 12:57:29 CDT 2005
.SUBCKT SN74LVC1G175 PE1 PE2 PE3 PE4 PE5 PE6
***PLEASE INCLUDE ONLY ONE PACKAGE***
.INCLUDE 'sot6.pkg'
* .INCLUDE 'sot6.pkg'
* .INCLUDE 'dsbga6.pkg'
X_SN74LVC1G175__DIE PI1 PI2 PI3 PI4 PI5 PI6 SN74LVC1G175__DIE
***PLEASE INCLUDE ONLY ONE PROCESS***
***NOMINAL or STRONG or WEAK***
.LIB 'sn74lvc1g175_process.lib' NOMINAL
**
** No globals were defined outside of .SUBCKT calls...
**
**
** The following netlist has gone through the hspice netlist cleaner,
** version v2.0 - Nov 20 2003
** on Mon Oct 24 12:57:29 CDT 2005
**
* .width IN=256
** Added by cleaner script...
.SUBCKT SN74LVC1G175__DIE CLK CGND D Q CVCC CLR
.prot FREELIB
%]= [+g/:K-A[7gd+%X:Zj*Q
7CD72>#/F4XA38#;:>XAa#DW%\>A$-c23$V0
'6/v%x=l68c99UXA<SgW%n[ $Y/>i*il.Y/>)'12g8<$-[uh)[
+)+%02/#uIF\>ha=u4qCP7T[
+KR->]J70# [*+$S%\:Ki3$Y#%:KgzV7gY%KZ
F.6Cc39[89=Yw+Z :5B# S: y$#(P:kGZv7Gy%kx\ ,tTY
3dgh#9J#[xZ2i# S2 V$s2 O9>P[s##+\*e$u\(p/x46_U4Y
3dgh#9J#'xZ2># S[1J57GD+%xa<sGw!=-T;7x -$12,.Q3p6
e78=#;:=5S7$#/Z=P2[+g/:W[0
'4\U:Ki]$#(j:KgzV7gY%KX78[
4#+UXA38# sSXAa#DW%\>A$4\Q
7M4'77\C39N2[O\;:K-A[7T! 6
B(8YZW[W7h(<8
X<03aM%#[tR.i$s%\:kI3$y#%:kGZv7Gy%kz
F.6C 6/hH$#(PMi*2_7GD+%xa<sGw!=-T;7x -i12,.QP(/z
F.6C 6[x $#(P#2/2[o\;:k-a[7C 6$f2,#Qup9CiY<jq
7CD78+VW<2Xz2=;439>!8Y#/6K>2H#9j#9cIybJWi=ahP[
4SqW[p(E-W%r,28(33>2XAa#DW%\>A$4\Yw(X48_5+:d$*9x8
oQcMZ77\c3(js$#(PM:j28(33p/xaA#dwUc[ad6\/A9I*p!Uu:DA+p[
4SqO[j$#(pmI12[,wW+z )0=#/Z=P2>6\/aC[AD7X(3IXlyx+jc6
eG.\\3:bJ2[,wW+z )0I#/Z=P2>6\/aC[AD7%((E*j$Uq4(6
eG.\\I:=5hs<uW+z ))$#Ke9>!8Y#9q=>>.#g*:dajP7%((E*jL
)/sU] 28(3,):xa3g# S[U+p7Gy%kxo..G*Q]>>$,Q+h$%2,_3+(6
eG.\*U:=5hs<JW+z ))$# s[u+77gY%KXO..g*q]>>$,q+H$%2,_;+y
3dg>.;w<2xZ2=;i)9[87JrJ:k-a[7Ks2k;g6shwI) Jp7%((e*Jl
)/sU]/28(33p$xa3g#kE9>P[s#9Q]>>..G*:DA+p7%((e*Jl
)/s+5 2[,'w+Z )0X#k)9>!8y#/6k>281\;C9Ci5_;4:D$HYJrwI=%*(X#m+[ATp[
4Sq==j$S%5:>XU*7gd+%XA<SgW+5[ 57Xtc)/:$U*p-[12,#-(c/X48=qU(6
B(8YZWTjid6[
+KR->]J7kS2K;28Y# Z9[U$S9/%9c*07%((E*jL
\3w+%xZA7\k:k-a[7*/A9C*Kk)m5[b:4c,Pr7xLY])Bfa -pcf<30Y2GyQRlV%-0Fx.ba iK[
aW'ba1RK-xPAcK4f3tX9$ y])bL'B+oUF<c;][7r7W2ba1RK)UHI:44f-.BA Mk[
+)+%02>6*/a6
BU\-g\ 9mG8SHW+%Xza7\K:KgzV7X(P9i*P!uUy
o 28y# z9[u$s2 O9[ad7x(xVt4n=++b;9H\]#=-7t=3F3X(;][7R7w'%A1rk-XpaCk4F3Tx6
:2g9qrLv%-0fX.BA Ik7*;-7T=Rb+4$d][5CF<30y269qrLvTjZ<aMBA%K4f3!X6
B(8YZWuC[AD[
+KR->]J7\$+%%2H#3W!=%2wrsW%n[ $S9/%9cI5_;+:d$hyjJWi=%*7x#M+[ahP[
4SqO[h$M$2:W[h$93W%n[ $\/ %fDz[/#=-/Bt57X(Xd[hk[
4SqO[j$93W!=%2[O\;:KgzV7kS+K;G8SHWF)1-(b#M-7cz5]8
oQcMi77t! 98Z77Gy%kxa<sGwUc$ad6*/A9I*p!Uu:DA1,.-RY
3dg>.-w0072h#-w%\>a$s9/%9Mg6shs2k;23_jXW'x4Y]xT37z
-t#dk:==ZvB8
X<03aM%##+\*e$4\w0072[o\;:k-a[7xT-u12,#QP(6
eG.\\p:M4'$4\W%n[ $S2 o9mG8SHS+K;2,_7M+A 1$,q+H$%0
'6/92[Xd\%##+9>p[S#/6K>2>6*/aC$AD7%((E*j$Uqri]9hk[
+)+%02H#9j#6
BU\-g\ 98z$4\W0072[O\;:K-A[[
4SqW5vs>##+90h$S2 o9>p[S#)<%Z
F.6K 39.mj7zP:kGZv7GD+%xo.#G*Q=>>$uQup9I*p!UuY
3dg>.3w0072/=#/6k>2[+G/:odi[//T%Fx4Y$jwf)1-(B8
X9=pu$4\q
Hb4/[GsW9bP2H##vRxXAa#DW%\>AL
s*$O98Z$s2 O91-S.8
oQcpJ$93w%\>a$y/>I*IL.y/>Cix;:0[(Ciz
F.6d3:B 2WRSwOcK4t,%sOcKJ07[595AJ0[
4Sq%/2/b#vRxX .nX)FrD .n-4:56(g_-4y
3dgv<#kC9>!8y#;Q_C(3,/;Q_%+$1')')%+l
)/s0k7;3.'#U*/2h##/z=p2v6bm9RIgv6bHC/x;:0[(#:10
:=##+9.MJ73+(90Ag,<(2Yk4T,%Q
H*[ /7<Ko6
BU\-g\ 9PG+U<=F9m78rZW2r4U$1')')FSP[
Dp:]iM/7k#+002V6Bhc/X;:0[(X56(g]8
X9=pu$y/>I*ILl
!z![k,'$m$2:w[2WRSw%N[ $s9/%6
>IgY#vRxXAa#DW(EuIL
)/sO[xu77Gy%kx .9h\8cpJ.oz;Q//:$uQPh$v2 _3w'y2;Y=-q
7CDO8=#KP98z$S2 o9>!8Y#9q=>>.#g*:ra:ZI-Wi)F:L
)/sU=/2/J##+9>!8y#/z=p2>6\/Ac[ad7%((e*J$uQPp/z
F.6K 0\ 28(Uw%\>a$s2 O9>!8y#9Q=>>.#G*:DAHp7%((e*Jl
)/sU]%2/=#kp98Z$#(P>9Mg6shiQ]>>$uQup/xLYX+JC6
eG.\*3:bu2H##/6K>2[+g/:ODI[//t%fXlyx+jc9c*7xJQ
7CDO6<#K39.MJ7Z4:K-A[7kS2K;S..g*:dah5xJWF)1-;b8
oQcMi97zP:m4'$s9/%90+$\/T%F/g6shwf)1-(B#m-[10
'6/92$XU77T! 9>p[S#K39mG6SHIq]>>$Uqp(9i*P!uUy
3dg>.ty390H$#(P>9[8(7Gy%kxo..G*>c$ad7x(>/123_jXW'z
F.6KT0\%2/=#VrXxa<sGw+Z*2>6*/A:di[/#=-/bT57x(3/z
F.6t/ 5Ii:4K)>9.mj7GD+%x .Nx)fRd .N5u(9=3t1Q,>/z
F.6'F'RxD\%#kM9>!8y#/z=p2x1%='B723#Q+h(%2,#QHp/z
-t#dk:m4'l
!z![k,'$\/T%F/28-# O9[!$#zwI)v23_jXW'z
o77\;:=G289# [9$ad7x(xVt4n=++b;9H\]#=-7t=3F3X(;][7R7w'%A1rk-XpaCk4F3Tx6
:2g9qrLv%-0fX.BA Ik7*;-7T=Rb+4$d][5CF<30y269qrLvTjZ<aMBA%K4f3!X6
B(8YZWuC$ADh8
X<03aM%#F'RI;/%# 39[!$#zw%N[ $u\(3/xL8_jX)6
eG.\\p:b 28O# <9>!8Y#9q=>>.M$2q=>>$Uqri=9hk7%(Xr[[7]8
5[5I28=#k39Y=re5+=VCZ-Bf.5V%-95-.b7xu[1%)-[bJ9e#2%[A)z>j)*/U2js-(3e%+t3jHY
e2Zv9#F'RI;/%8
X<03aM%#9Q=>>.m$2:=p28o# <9>!8y#m-[123_3q
u[XzV7\d:=02[O\;:=>>$UqrLvc[7!J.BA Mk7%(XvTlN=++B;9h\]#$o)y=Rj+jPAcK4f3tX6
:2g9qrLv%-0x,MB;9h6]#to)y=RK)3H$V$,C,UBA1-5CF<30y269qrLvT=5!R+$d][5C,+H']KN=$ry
e2Zv9#9Q=>>.m$2Y
e0mxsW2:%dudgpwUw[m/7*=rBx\Y=#m-[bT07[595AJpX8
;39$L\9#9!=4u$y-szBpgpHjw'y2;Y][595Y0
Vb#tF002>4\!<9PG6#-4(9y=RK[595L44f;.$vT4ojF<mA_K4]8
X9=pu$y/kA4O0
Nf8
<597>t7:VfR.4h#2whB4/[gSk:D23t7[;O*p2x2#2A*xa30[ 9yxaW\K$+%b0
Nf#2a*0($1'):Y2n\4')o98z$M';9YX'w7')uM-($%H):b$7[0/90%2l$.[5'O2'T8Zxy
a90
N7kvoW_7TY#2a*X .nX)FrXzT%%#<xX\w8#2a*X .n5U(90IHS<WuMP(3!+xy
e0mxsW2:%dX,0%=Q%dX9BjwUw[m/7*=rBx;:0[(#:10
V=#tF002>4\!<9PG+$-+:56(g_7$;*=1L
!< OBx .Nx)fRd .N5u(6
92>MD#TW2 $%H):%Dx,0%=:=2'34Z2:j.3$%H):%Dx5<#K2W>($\T;9rB-Z[
+KR->]J7DSJd2l36DSJ'V2>4\!<9$l\9#$;*=*;hJQ
o[XI3rZWuW[M/7DSJ'V2g8<$-7=3T17Q
H*[ /7DSJd2l36DSJ'V0
N7kvoW_7TY#2a*XO.#g*:=2'34Z2:j.3$%H):=>>$9*#%*XOwY<=HEB0
Z9$f%472>6\/aC[AD7\;:=g289#/Z=P2,_RWF)1-(b8
939[ $#2w+BxaA#dw+k;2,_7BlD9HzXf.5[41$,QRlVI[7!j.ba mK7[;-7t=5!r<I;][7.7q
$9=Uy])bcEV[,CF<3]y26YqrLvTjZ<aMBA%K4f3!X9$Uy])bL'B+oUF<c;][7r7Q
H*[ /7kS+K;G8SHQ
59mdV4:#9%X'D0#9q]>>)7\) r8UJ7:v;97>T7*/a90IHS<WuMP(3!+xy
e0mxsW2:odi[/vs2k;28-# O9[!$#zwI)v23_jXW'z
o77\;:=G289# [9$ad7x(xVt4n=++b;9H\]#=-7t=3F3X(;][7R7w'%A1rk-XpaCk4F3Tx6
:2g9qrLv%-0fX.BA Ik7*;-7T=Rb+4$d][5CF<30y269qrLvTjZ<aMBA%K4f3!X6
B(8YZWuC$ADh/t%fZ
[$\t;!J8(v7S*99pg//W::=2'34z2:J.3$%h):%%gA9ds(:12/.C/99MDv0%Xhez
-/R0/.Xx .9h\8cpJ.oz;Q//:$\C rBxi3Rzwt) 2,_3XWix;:0[(C/10
V=#tF002>4\!<9Pj.OZ;q//:$1')')y;:0[ry
%%26,$k:o8Z\9#;Q][J0X#RlVt;:0['I;9)4T)BI8UknJ,[b;Y0
Z0\;<9PG//w:q%%Ga9DS(:10
N7kvoW_7TY#2a*XO.#g*qM4'$#<2FW0'$dT5:x;($#g*:b$7[0#90%2lZ!+Q
Hb4/[GsWuC[AD6T! C[AD7\;:=g289#/Z=P2,_3+:rahL
\3w+%xZA7\k:kGZv7\/A9C*Kk)m5[b:4c,Pr7xLY])Bfa -pcf<30Y2GyQRlVU-(<,mb;9H6]8
_:50*Kk)uhi1[,cf<3]Y26yQRlVt=S!U4$D][5c,+h']kn=$R:]0*Kk)Bl'b+pTx.5'][p!-.ba mK[
+)+%02>6\/aC.MJ6\/a6
92>MD#TW2 $%H):ODI[/# 9xi7/%#[0YX'D0#t%fXU64g):O. T,+xH6
BU\-g\ 9mG6SHS2K;28Y# Z9[U$S9/%9c*07%((E*jL
\3w+%xZA7\k:k-a[7*/A9C*Kk)m5[b:4c,Pr7xLY])Bfa -pcf<30Y2GyQRlV%-0Fx.ba iK[
aW'ba1RK-xPAcK4f3tX9$ y])bL'B+oUF<c;][7r7W2ba1RK)UHI:44f-.BA Mk[
+)+%02>6*/aC$AD[
+!+]6dJ[
.ENDS SN74LVC1G175
