#include <stdio.h>
#include <wiringPi.h>    
int main(void)    
{
	printf("GPIO 11-> 0\n");
	wiringPiSetup() ;    
	pinMode (0, OUTPUT) ;    
	for(;;)
	{
		digitalWrite(0, HIGH) ; delay (500) ;
		digitalWrite(0,  LOW) ; delay (500) ;
	}
}
