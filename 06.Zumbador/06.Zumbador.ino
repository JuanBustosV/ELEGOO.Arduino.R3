// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       L06.Zumbador.ino
    Created:	14/03/2021 12:58:13
    Author:     Juan Bustos
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//


int buzzer = 12;//the pin of the active buzzer
// The setup() function runs once each time the micro-controller starts
void setup()
{
    pinMode(buzzer, OUTPUT);//initialize the buzzer pin as an output
    //Serial.begin(115200);
}

// Add the main program code into the continuous loop() function
void loop()
{
    unsigned char i;
    while (true)
    {
        //output an frequency
        for (i = 0; i < 80; i++)
        {
            digitalWrite(buzzer, HIGH);
            delay(1);//wait for 1ms
            digitalWrite(buzzer, LOW);
            delay(1);//wait for 1ms
        }
        //delay(1000);
        delay(100);
        //Serial.println("Frequeny changed");
        //output another frequency
        for (i = 0; i < 100; i++)
        {
            digitalWrite(buzzer, HIGH);
            delay(2);//wait for 2ms
            digitalWrite(buzzer, LOW);
            delay(2);//wait for 2ms
        }
        //Serial.println("Frequeny changed");
    }

}
