// ============================================================================
const int arduinoBoardLED = 13; // LED on pin 13

void setup() {
  
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.
  Serial.println("Running The Seup Function");
}

void loop() {
  int Var = 1;
  delay(1000); // just a small delay to slow the main loop down
  Serial.println("Starting Main Loop Code");
for (int i = 0; i <=20; i++){
delay(1000);
  Serial.println(i);
  Serial.println("Success");
if (i==10){
 Serial.println("the loop is equal to 10");
    }
else if (i<10){
  Serial.println("the loop is less than 10");
     }
else if (i>10){
  Serial.println("the loop is greater than 10");
    }
  }
}

