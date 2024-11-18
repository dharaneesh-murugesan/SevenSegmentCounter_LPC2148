#include <LPC214X.H>

unsigned char test[] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f}	   ;

void delay()

{
	int k;
	for(k=0; k<1000000; k++);

}

void main()
{
	int j,l;
	IO0DIR = 0xff;


	while(1)
	{

		for(j=0; j<10; j++)
		{

			IO0SET =  test[j];
			delay();

			IO0CLR = 0xff;
		}

	}
}