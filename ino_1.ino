#define LED1 9
#define LED2 8
#define LED3RED 7
#define LED3BLUE 6
#define LED3GREEN 5
#define DELAY_TIME 1000


void setup() {
  // put your setup code here, to run once:
  //pin as output 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3RED, OUTPUT);
  pinMode(LED3BLUE, OUTPUT);
  pinMode(LED3GREEN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3RED, HIGH);
  digitalWrite(LED3BLUE, HIGH);
  digitalWrite(LED3GREEN, HIGH);
  delay(DELAY_TIME);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3RED, LOW);
  digitalWrite(LED3BLUE, LOW);
  digitalWrite(LED3GREEN, LOW);
  delay(DELAY_TIME);
}
