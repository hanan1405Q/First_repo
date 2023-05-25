#include<util/delay.h>
#include<avr/io.h>

int main (void)
{

	DDRA=0b00001111 ;  //PA0 ->output


	while(1) //SuperLoop
		{
		  PORTA=1;
		  _delay_ms(250);
		 for(int i=0;i<=3;i++)
			 {
			 PORTA <<=1 ; //PA0 ->High
			 _delay_ms(250);
			 }


	    }

}


