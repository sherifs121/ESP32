// thr number of thr LED pin 
const int ledPin = 16; // 16 corresponds to GPIO16
// setting PWM properties 
const int freq =5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  // put your setup code here, to run once:
  // configure LED PWM functionalities 
  ledcSetup(ledChannel, freq, resolution);
  //attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin , ledChannel);

}
void loop() {
  // put your main code here, to run repeatedly:
//increase the LED brightness
for(int dutyCycle =0; dutyCycle <=255; dutyCycle++){
  //changing the LED brightness with PWM
  ledcWrite(ledChannel , dutyCycle);
dela(15);

}
}
