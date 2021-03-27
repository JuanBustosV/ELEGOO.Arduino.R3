// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       Blink.ino
    Created:	14/03/2021 12:14:59
    Author:     Juan Bustos
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);

    sayHello();
}

// Add the main program code into the continuous loop() function
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second    
}

void sayHello() {
    Serial.println("Hello World");
}