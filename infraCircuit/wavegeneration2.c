#include<reg51.h>
void delay();
void main()
{
	while(1)
	{
		P1+=0x88;
		delay();
		P1=0x00;
		delay();
	}
}
void delay()
{
	int i,j,k;
	for(i=0;i<10;i++);
	for(j=0;j<100;j++);
	for(k=0;k<200;k++);
}