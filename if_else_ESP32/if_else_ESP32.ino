int i = 0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if((i % 2) == 0){
  Serial.print("Inside the IF statement: i = ");
  Serial.print(i);
  Serial.println(", even number");

}else{
  Serial.print("Inside the IF statement: i =  ");
  Serial.print(i);
  Serial.println(", odd number");
  
} 
i++; // increase i by 1
delay(500);
}
