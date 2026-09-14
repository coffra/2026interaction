// week02_5_arduino_do_re_mi_Serial_begin_available_read_if_tone
// google:我想要把 Arduino 跟 Processing 結合
// 在 Processing 按下 key 1 2 3 對應 Arduino 的 Do Re Mi 使用 USB Serial
//寫完程式後，用tool-序列埠監控視窗SerialMonitor來傳送1 2 3測試，很麻煩

void setup() {
  Serial.begin(9600);//USB Serial開始傳輸，速度9600bps
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){//如果USB Serial有收到資料
  char c= Serial.read();//讀進來
  if(c=='1') tone(8,523,1000);//do,1秒
  if(c=='2') tone(8,587,1000);//re,1秒
  if(c=='3') tone(8,659,1000);//mi,1秒
 }
}
