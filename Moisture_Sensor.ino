int moisture_sensor = A0; //sensors pin connected arduinos A0
int moisture_val=0; //The value will be stored in this variable
int blue_led=9;
int yellow_led = 13;
void setup(){
  pinMode(13, OUTPUT);
  Serial.begin (9600);
}
void loop (){
  moisture_val = analogRead(moisture_sensor);
  if (moisture_val>700){//we can set this threshold value what we want
  //I set this reference as 700, when soil dry humidity will high, when it is wet humidity will be low
    Serial.print("\n");
    Serial.println(moisture_val);
    Serial.print("Soil is dry, Please Water");

    digitalWrite(yellow_led, HIGH);
    digitalWrite(blue_led, LOW);
    delay(5000);
 } 
 
 else{
  Serial.print("\n");
    Serial.println(moisture_val);
    Serial.print("No need to water");
    
    digitalWrite(blue_led, HIGH);
    digitalWrite(yellow_led, LOW);
    delay(5000);
  }
}