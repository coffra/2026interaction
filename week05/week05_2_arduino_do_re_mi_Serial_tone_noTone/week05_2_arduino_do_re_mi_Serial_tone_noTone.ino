//week05_2_arduino_do_re_mi_Serial_tone_noTone
//修改自week05_1_arduino_do_re_mi_Serial
void setup() {
  Serial.begin(9600);//USB Serial開始傳輸，速度9600bps
  tone(8,523,100); delay(200);//do，等一下聲音，讓他不要滑出去
  tone(8,587,100); delay(200);//re
  tone(8,659,100); delay(200);//mi
  tone(8,587,100); delay(200);//re
  tone(8,523,100); delay(200);//do

}
char c='0';//0:沒聲音 1:do 2:re 3:mi
void loop() {
  if(Serial.available()){//如果USB Serial有收到資料
  c= Serial.read();//就讀進來(不要在宣告變數Char c,直接寫c)
  }
  if(c=='0') noTone(8);//不要發出聲音
  if(c=='1') tone(8,523);//do 一直發聲音
  if(c=='2') tone(8,587);//re 一直發聲音
  if(c=='3') tone(8,659);//mi 一直發聲音
}
