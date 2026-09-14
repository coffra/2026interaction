//week02_2_arduino_void_setup_pinMode_void_loop_digitalWrite
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);//第八個角，發出聲音
}
//勾勾(Ctrl-R編譯程式) 箭頭往右(Ctrl-U上傳到電路板)
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);//發出高電位
  delay(1);//等一秒
  digitalWrite(8,LOW);//發出低電位
  delay(1);//等一秒
}
