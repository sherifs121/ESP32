/* 1 void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 Serial.println("===== TEST START ====");
 int i= 1;
 while(i <= 5){
  Serial.print("Inside the FOR loop: i =");
  Serial.println(i);
  i++;
 }
 Serial.println("===== TEST END =====");
}

void loop() {
  // put your main code here, to run repeatedly:

}*/
//EX 2
// Dim an LED using a PWM pin 
int PEMpin = 10; // LED in series with 470 ohm resister on pin 10
void setup(){
  //no setup needed
}
void loop(){
  for(int i = 0; i<=255; i++){
    analogWrite(PWMpin, i);
    delay(10);
  }
}


