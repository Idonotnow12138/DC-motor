//ͷ�����˿�  ��ʱ  ֱ�����  ������
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
void motor()//��ת����192��������������ͬ����ʱֵʹ�������192/2=96
{
 IN1=0;
 IN2=1;
 delay(4);//�������ʱ����Ļ������Ƶ�ʹ��ʹӶ���������
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