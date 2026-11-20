void setup()
{
    // set up output pins
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    
    // blink green LED on and off twice
        digitalWrite(8, HIGH);
        delay(200);
        digitalWrite(8, LOW);
        delay(200);
        digitalWrite(8, HIGH);
        delay(200);
        digitalWrite(8, LOW);
    // wait one second
    delay (1000);
    
    // blink blue LED on and off twice
        digitalWrite(7, HIGH);
        delay(200);
        digitalWrite(7, LOW);
        delay(200); 
        digitalWrite(7, HIGH);
        delay(200);
        digitalWrite(7, LOW);
    // wait three seconds
    delay (3000);
}

void loop()
{
    // blink both LEDs on and off alternatively
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    delay(650);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(650);
}