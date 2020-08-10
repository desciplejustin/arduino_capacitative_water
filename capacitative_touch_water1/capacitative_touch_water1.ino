#define high_pin T0
#define low_pin T3

const int LED_PIN_NUMBER = 22;

const int HIGH_THRESHOLD = 50;
const int LOW_THRESHOLD = 50;

int HIGH_WATER_LEVEL;
int LOW_WATER_LEVEL;

void setup()
{
Serial.begin(115200);
Serial.print("Water sensor test 1");
delay(1000); 
pinMode (LED_PIN_NUMBER, OUTPUT);
}

void loop(){
HIGH_WATER_LEVEL = touchRead(high_pin);
LOW_WATER_LEVEL = touchRead(low_pin);

Serial.print("HIGH LEVEL = ");
Serial.println( HIGH_WATER_LEVEL);
Serial.print("LOW LEVEL = ");
Serial.println(LOW_WATER_LEVEL);
delay(1000);

if ((HIGH_WATER_LEVEL < HIGH_THRESHOLD) && (LOW_WATER_LEVEL < LOW_THRESHOLD)){
  while(LOW_WATER_LEVEL < LOW_THRESHOLD){
  digitalWrite(LED_PIN_NUMBER, HIGH);
  LOW_WATER_LEVEL = touchRead(low_pin);
}} else {
  digitalWrite(LED_PIN_NUMBER, LOW);
}
}
