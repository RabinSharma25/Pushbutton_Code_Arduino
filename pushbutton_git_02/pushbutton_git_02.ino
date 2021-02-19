
// Program that holds the state of pushbutton with a single press

int button_pin = 5; // signal pin to digital pin 5
int val_new;
int val_old;
int state=0;

void setup() {
Serial.begin(9600);
pinMode(button_pin,INPUT);


}

void loop() {
  val_new = digitalRead(button_pin);
  if(val_new ==0 && val_old ==1){
    state = !state;
  }
  
 if(state ==1){
  Serial.println(1);
  
 }
 else {
 Serial.println(0);
 }
  val_old = val_new; // updating val_old

}
