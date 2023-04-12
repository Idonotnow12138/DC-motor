//头部及端口  延时  直流电机  函数体
#include <reg51.h>
#define uint unsigned int
sbit IN1=P2^0;
sbit IN2=P2^1;
sbit EN=P2^2;
void delay(uint w)
{
 uint c,f;
 for(c=0;c<w;c++)
 {
 for(f=0;f<120;f++);
 }
}
void motor()//满转速是192，但下面两个相同的延时值使其除二：192/2=96
{
 IN1=0;
 IN2=1;
 delay(4);//这里的延时过大的话会造成频率过低从而波动过大
 IN2=0;
 delay(4);
 EN=1;
}
void main()
{
 while(1)
 {
  motor();
 }
}