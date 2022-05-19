/*
 * programmé par Philippe Chevelev, 5ème Anne Frank
 * Ce programme sert à démontrer à son professeur de Physique le PWM
 * 
 * 
 */
#define led 3
void PWM(double ecart){
  digitalWrite(led, LOW);
  delayMicroseconds(ecart);
  digitalWrite(led, HIGH);
}
void PWM_potentiometre(){
  int  val = analogRead(A1);
  digitalWrite(led, LOW);
  delayMicroseconds(val);
  digitalWrite(led, HIGH);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PWM_potentiometre();
}
