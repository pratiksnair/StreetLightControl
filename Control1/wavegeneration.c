//21427 Pratik Nair
#include<reg51.h>
#include<intrins.h>
void main()
{
	unsigned int i;
	unsigned int waveValue[16]={128,132,224,200,255,240,224,192,128,64,32,16,0,16,32,64};
	while(1)
	{
		for(i=0;i<16;i++)
		{
			P1=waveValue[i];
			_nop_();
			_nop_();
			_nop_();
			_nop_();
			_nop_();
			_nop_();
			_nop_();
		}
	}
}