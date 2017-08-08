#include <Wiegand.h>

WIEGAND wg;

void setup() {
	Serial.begin(9600);  
	wg.begin();
        Keyboard.begin();
}

void loop() {
	if(wg.available())
	{
	           Keyboard.print(wg.getCode(), HEX);
	}
}

