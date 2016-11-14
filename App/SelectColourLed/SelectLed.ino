/*
Created:	11 / 14 / 2016 4 : 11 : 54 PM
Author : Sandra Muller
*/
int GreenPin = 2;
int RedPin = 3;
int YellowPin = 4;
int byteRead;

void setup()
{
	pinMode(GreenPin, OUTPUT);
	pinMode(RedPin, OUTPUT);
	pinMode(YellowPin, OUTPUT);
	//create a serial connection
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available() > 0) {
		/* read the most recent byte */
		byteRead = Serial.read();
		/*ECHO the value that was read, back to the serial port. */
		Serial.write(byteRead);

		//test if the user selected green or red
		switch (byteRead)
		{
			case 49:
				//we got a 'yellow' from the app so turn on the digital pin
				Serial.write(" - got yellow - ");
				PrintBytes();
				for (int i = 0; i < 3; i++)
				{
					digitalWrite(YellowPin, HIGH);
					delay(500);
					digitalWrite(YellowPin, LOW);
					delay(500);
				}
				break;

			case 50:
				//we got a 'green' from the app so turn on the digital pin
				Serial.write(" - got green - ");
				PrintBytes();
				for (int i = 0; i < 3; i++)
				{
					digitalWrite(GreenPin, HIGH);
					delay(500);
					digitalWrite(GreenPin, LOW);
					delay(500);
				}
				break;

			case 51:
				//we got a 'red' from the app so turn on the digital pin
				Serial.write(" - got red - ");
				PrintBytes();
				for (int i = 0; i < 3; i++)
				{
					digitalWrite(RedPin, HIGH);
					delay(500);
					digitalWrite(RedPin, LOW);
					delay(500);
				}
				break;

			case 52:
				//incorrect input from app and "4" frm serial monitor
				Serial.write(" - Fatal error! Jokes, pick one of the LED options available to you... - ");
				PrintBytes();
				break;

			default:
				//incorrect input from serial monitor
				Serial.write(" - Error - ");
				PrintBytes();
				break;
		}

	}
}

void PrintBytes() {
	Serial.println(byteRead);
	Serial.println();
}
