//week06_1_arduino_pin_2_button_INPUT_PULLUP
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);//預設pin_2是button
  pinMode(8,OUTPUT);//預設pin_8是Buzzer喇叭
  tone(8,523,100);//開啟時發一下聲音，代表程式沒錯
}//如果不發聲音，可能會以為程式出錯、板子壞掉

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)==LOW){
  tone(8,523,100);//0.1秒
  delay(100);//讓聲音夠長
  }
}
