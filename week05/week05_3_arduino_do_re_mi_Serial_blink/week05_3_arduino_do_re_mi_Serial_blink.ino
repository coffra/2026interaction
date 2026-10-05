//week05_3_arduino_do_re_mi_Serial_blink
//修改自week05_2_arduino_do_re_mi_Serial_tone_noTone
//會有對應的燈號，閃閃發亮
void setup() {
  pinMode(8,OUTPUT);//Buzzer 8 聲音
  pinMode(10,OUTPUT);//對應'0'
  pinMode(11,OUTPUT);//對應'1'
  pinMode(12,OUTPUT);//對應'2'
  pinMode(13,OUTPUT);//對應'3'
  
  Serial.begin(9600);//USB Serial開始傳輸，速度9600bps
  tone(8,523,100); delay(200);//do，等一下聲音，讓他不要滑出去
  tone(8,587,100); delay(200);//re
  tone(8,659,100); delay(200);//mi
  tone(8,587,100); delay(200);//re
  tone(8,523,100); delay(200);//do

}
char c='0';//在外宣布變數。0:不要發聲音 1:do 2:re 3:mi
void loop() {
  if(Serial.available()){//如果USB Serial有收到資料
    c= Serial.read();//就讀進來(不要在宣告變數Char c,直接寫c)
  }
  for(int i=10;i<=13;i++) digitalWrite(i,LOW);//先暗下來
  if(c>='0'&& c<='3') digitalWrite(c-'0'+10,HIGH);//大小寫換算
  if(c=='0') noTone(8);//不要發出聲音
  if(c=='1') tone(8,523);//do 一直發聲音
  if(c=='2') tone(8,587);//re 一直發聲音
  if(c=='3') tone(8,659);//mi 一直發聲音
}
