//week02_04_arduino_tone_do_523_re_587_mi_659_delay_1000
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
 //只做一次
  tone(8,523,1000);//do,1秒
  delay(1000);
  tone(8,587,1000);//re,1秒
  delay(1000);
  tone(8,659,1000);//mi,1秒
}

void loop() {
  // put your main code here, to run repeatedly:

}
