// C++ code
//

const int PIEZO = 8;
const int LED = 7;

void setup()
{
  pinMode(PIEZO, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
	int noteDuration = 500;
    tone(PIEZO, 2000, noteDuration);
    digitalWrite(LED, HIGH);
  	delay(500);
  	tone(PIEZO, 1000, noteDuration);
    digitalWrite(LED, LOW);
	delay(500);
}