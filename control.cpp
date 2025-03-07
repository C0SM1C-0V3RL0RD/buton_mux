const int S[4] = {9, 8, 7, 6};  
const int signal = 11;

const int bttn1 = 2;
const int bttn2 = 12;

void setup() {
    pinMode(signal, OUTPUT);
    pinMode(bttn1, INPUT);
    pinMode(bttn2, INPUT);

    digitalWrite(signal, HIGH);

    Serial.begin(9600);
}

void loop() {
    int btn1 = digitalRead(bttn1);
    int btn2 = digitalRead(bttn2);

    if (btn1 == HIGH) {
        Serial.println("Button 1 Pressed");
    }
    if (btn2 == HIGH) {
        Serial.println("Button 2 Pressed");
    }

    delay(100); 
}
