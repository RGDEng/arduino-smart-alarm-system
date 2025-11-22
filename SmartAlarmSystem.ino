const int ledPin = 3;
const int buttonPin = 12;

unsigned long startTime = 0;
bool alarmActive = false; 
const long duration = 10000; // 10 seg

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
    
    if (digitalRead(buttonPin) == HIGH && alarmActive == false) {
        alarmActive = true;      
        startTime = millis();   
        delay(200);              
    }

    
    if (alarmActive == true) {
        
        
        if (millis() - startTime < duration) {
            
            
            digitalWrite(ledPin, HIGH);
            delay(100);
            digitalWrite(ledPin, LOW);
            delay(100);

            /
            if (digitalRead(buttonPin) == HIGH) {
                alarmActive = false;       
                digitalWrite(ledPin, LOW);
                delay(1000);               
            }
            
        } else {
            
            alarmActive = false;      
            digitalWrite(ledPin, LOW); 
        }
    }
}
