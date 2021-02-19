// Program to run a counter using pushbutton 

int button_pin = 5; // signal pin to digital pin 5
int val_new;
//int val_old =0;
int counter =0;

void setup() {
Serial.begin(9600);
pinMode(button_pin,INPUT);


}

void loop() {
  val_new = digitalRead(button_pin);
  if(val_new ==1 ){
    counter ++;
  }

  Serial.println(counter);
  
delay(100);
}
