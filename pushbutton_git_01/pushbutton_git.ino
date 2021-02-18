//Reading the state of a pushbutton using external pullup  resistor

int button_pin = 5; // declaring the button pin
int val; 
void setup() {
pinMode(button_pin,INPUT);
Serial.begin(9600);

}

void loop() {
 
val = digitalRead(button_pin);
Serial.println(val);
}
